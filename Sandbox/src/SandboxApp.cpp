#include <Midnight.h>

class ExampleLayer : public Midnight::Layer
{
public:
	ExampleLayer()
		:Layer("Example")
	{}

	void OnUpdate() override
	{
		MN_INFO("ExampleLayer::Update");
	}

	void OnEvent(Midnight::Event& event) override
	{
		// NOTE: This only works when we set the runtime library under C++/Code Generation to Mutli-Threaded Debug Dll(MDd) 
		MN_TRACE("{0}", event);
	}
};

class Sandbox : public Midnight::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{
	}
};

Midnight::Application* Midnight::CreateApplication()
{
	return new Sandbox();
}