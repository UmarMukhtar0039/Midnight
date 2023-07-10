#include <Midnight.h>

class Sandbox : public Midnight::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Midnight::Application* Midnight::CreateApplication()
{
	return new Sandbox();
}