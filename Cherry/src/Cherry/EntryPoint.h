#pragma once
#include "../Cherry.h"

#ifdef CH_PLATFORM_WINDOWS

Cherry::Application* Cherry::CreateApplication();

int main(int argc, char** argv)
{

	auto app = Cherry::CreateApplication();
	app->Run();

	delete app;

	return 0;
}

#endif
