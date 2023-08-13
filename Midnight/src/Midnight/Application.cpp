#include "Application.h"
#include "Log.h"
#include "Events/ApplicationEvent.h"

namespace Midnight {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);

		MN_INFO(e);

		while (1);
	}
}