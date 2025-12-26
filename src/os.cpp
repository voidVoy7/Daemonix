#include "headers/os.h"
#include <regex>
#include <string>
#include "headers/readfile.h"


const std::vector<std::string> os_release_paths = {"/etc/os-release",
                                                   "/bedrock/etc/os-release"};

std::string get_os_name() {
  const std::regex os_regex(R"REGEX(ID="?([^"]+)"?)REGEX");
  std::smatch match;

  for (const auto &path : os_release_paths) {
    std::string content = read_file(path);

    if (content.empty()) {
      continue;
    }

    std::istringstream os_release(content);
    std::string line;

    while (std::getline(os_release, line)) {
      if (std::regex_match(line, match, os_regex)) {
        return match[1].str();
      }
    }
  }

  return "Unknown";
}
