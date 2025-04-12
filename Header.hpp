#pragma once
#include <string>

#ifdef _WIN32
#ifdef _WINDLL
#define MANGLELIB __declspec(dllexport)
#else
#define MANGLELIB __declspec(dllimport)
#endif
#else
#define MANGLELIB
#endif
