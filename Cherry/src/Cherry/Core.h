#pragma once

#ifdef CH_PLATFORM_WINDOWS

	#ifdef CH_BUILD_DLL

		#define CHERRY_API __declspec(dllexport)

	#else

		#define CHERRY_API __declspec(dllimport)

#endif
#else
	#error "only windows defined"
#endif

#define TESTING 100