#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Midnight::Application* Midnight::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Midnight::CreateApplication();

	app->Run();

	delete app;
}

#endif