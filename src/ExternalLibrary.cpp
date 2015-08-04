// This is an example for a heaer file
// It defines the square of a number function

#include "ExternalLibraryPublicHeader.h"

ExternalLibrary_EXPORT double ExternalLibrary::myfunction(double x)
{
	return sqrt(x);
}


ExternalLibrary_EXPORT void ExternalLibrary::printConfigVariables(void){

// This line print variables into Config.h header if
// DEBUG_FLAG was set to TRUE during Configuration time
#ifdef ExternalLibrary_DEBUG_FLAG

    fprintf(stdout,"The current version of the program %s is: %i.%i\n",
           ExternalLibrary_PROJECT_NAME, ExternalLibrary_VERSION_MAJOR, ExternalLibrary_VERSION_MINOR);
#else

    fprintf(stdout,"printConfigVariables function\n");

#endif
  }
