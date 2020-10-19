#pragma once
#ifdef GE_PLATFORM_WINDOWS
extern GoyaEngine::Application* GoyaEngine::CreateApplication();

int main (int argc, char** argv)
{

	GoyaEngine::Log::Init();
	GE_CORE_WARN("Init Log!");
	int a = 8;
	GE_INFO("Hello! var={0}", a);
	auto app = GoyaEngine::CreateApplication();
	app->Run ();
	delete app;
}
#endif