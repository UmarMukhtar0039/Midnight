#pragma once

#include "Midnight/Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Midnight {
	class MIDNIGHT_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define MN_CORE_ERROR(...)		::Midnight::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MN_CORE_WARN(...)		::Midnight::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MN_CORE_INFO(...)		::Midnight::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MN_CORE_TRACE(...)		::Midnight::Log::GetCoreLogger()->trace(__VA_ARGS__)
//#define MN_CORE_FATAL(...)		::Midnight::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MN_ERROR(...)			::Midnight::Log::GetClientLogger()->error(__VA_ARGS__)
#define MN_WARN(...)			::Midnight::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MN_INFO(...)			::Midnight::Log::GetClientLogger()->info(__VA_ARGS__)
#define MN_TRACE(...)			::Midnight::Log::GetClientLogger()->trace(__VA_ARGS__)
//#define MN_FATAL(...)			::Midnight::Log::GetClientLogger()->fatal(__VA_ARGS__)


