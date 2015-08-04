// This is an example for a heaer file
// It defines the square of a number function

// This header file will be created during configuration time
// You can modify into CMake folder
#include "ExternalLibraryConfig.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

namespace ExternalLibrary{

ExternalLibrary_EXPORT double myfunction(double x);

ExternalLibrary_EXPORT void printConfigVariables(void);

}

