#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Alter
{
	class ALTER_API Log
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

//Core Log Macros
#define AT_CORE_TRACE(...) ::Alter::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define AT_CORE_INFO(...)  ::Alter::Log::GetCoreLogger()->info(__VA_ARGS__)
#define AT_CORE_WARN(...)  ::Alter::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define AT_CORE_ERROR(...) ::Alter::Log::GetCoreLogger()->error(__VA_ARGS__)
#define AT_CORE_FATAL(...) ::Alter::Log::GetCoreLogger()->fatal(__VA_ARGS__)


//Client Log Macros
#define AT_TRACE(...) ::Alter::Log::GetClientLogger()->trace(__VA_ARGS__)
#define AT_INFO(...)  ::Alter::Log::GetClientLogger()->info(__VA_ARGS__)
#define AT_WARN(...)  ::Alter::Log::GetClientLogger()->warn(__VA_ARGS__)
#define AT_ERROR(...) ::Alter::Log::GetClientLogger()->error(__VA_ARGS__)
#define AT_FATAL(...) ::Alter::Log::GetClientLogger()->fatal(__VA_ARGS__)



