#include <string>
#include <string.h>
#include "gc.h"

const std::string who_ami(int nc)
{
    return strcpy((char*)GC_MALLOC(nc), "pardner");
}
