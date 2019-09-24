#include <string>
#include <string.h>
#include "gc.h"

const std::string whom()
{
    return strcpy((char*)GC_MALLOC(10), "pardner");
}
