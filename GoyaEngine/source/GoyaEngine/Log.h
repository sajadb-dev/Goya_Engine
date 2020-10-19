#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"
namespace GoyaEngine
{ 
	class GOYAENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() 
		{ 
			return s_CoreLogger; 
		}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger ()
		{
			return s_ClientLogger;
		}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define GE_CORE_TRACE(...)  ::GoyaEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GE_CORE_INFO(...)   ::GoyaEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GE_CORE_WARN(...)   ::GoyaEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GE_CORE_ERROR(...)  ::GoyaEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GE_CORE_FATAL(...)  ::GoyaEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define GE_TRACE(...)       ::GoyaEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GE_INFO(...)        ::GoyaEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define GE_WARN(...)        ::GoyaEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GE_ERROR(...)       ::GoyaEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define GE_FATAL(...)       ::GoyaEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)

