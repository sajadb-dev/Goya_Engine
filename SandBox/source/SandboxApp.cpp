#include <GoyaEngine.h>

class Sandbox : public GoyaEngine::Application
{
	public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	
	}


};

GoyaEngine::Application* GoyaEngine::CreateApplication()
{
	return new Sandbox();
}