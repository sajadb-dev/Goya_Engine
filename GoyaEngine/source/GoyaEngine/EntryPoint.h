#pragma once
#ifdef GE_PLATFORM_WINDOWS
extern GoyaEngine::Application* GoyaEngine::CreateApplication();

int main (int argc, char** argv)
{
	auto app = GoyaEngine::CreateApplication();
	app->Run ();
	delete app;
}
#endif