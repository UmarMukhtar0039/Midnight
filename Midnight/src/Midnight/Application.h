#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Midnight/Events/ApplicationEvent.h"
#include "Midnight/Events/MouseEvent.h"
#include "Window.h"

namespace Midnight {

	class MIDNIGHT_API Application
	{
	public:
		Application();
		virtual ~Application();
	
		void Run();

		void OnEvent(Event& event);

	private:

		bool OnWindowClosed(WindowCloseEvent event);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in CLIENT.
	Application* CreateApplication();
}
