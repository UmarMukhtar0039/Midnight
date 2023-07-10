#pragma once

#ifdef MN_PLATFORM_WINDOWS

extern Midnight::Application* Midnight::CreateApplication();

int main(int argc, char** argv)
{
	Midnight::Log::Init();
	MN_CORE_WARN("Initialized Log");
	int a = 10;
	MN_INFO("Hello Var={0}", a);


	auto app = Midnight::CreateApplication();

	app->Run();

	delete app;
}

#endif