#pragma once
#include "Core.h"

namespace Midnight {

	class MIDNIGHT_API Application
	{
	public:
		Application();
		virtual ~Application();
	
		void Run();

	};

	// To be defined in CLIENT.
	Application* CreateApplication();
}
