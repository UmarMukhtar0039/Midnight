#pragma once

#include "Core.h"
#include "Window.h"
#include "Events/Event.h"
#include "Midnight/Events/ApplicationEvent.h"
#include "Midnight/Events/MouseEvent.h"
#include "LayerStack.h"

namespace Midnight {

	class MIDNIGHT_API Application
	{
	public:
		Application();
		virtual ~Application();
	
		void Run();

		void OnEvent(Event& event);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

	private:

		bool OnWindowClosed(WindowCloseEvent event);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;

		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT.
	Application* CreateApplication();
}
