#include <unistd.h>
#include "headers/isroot.h"

bool isRoot() {
    return geteuid() == 0;
}
