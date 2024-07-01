#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace kb
{
	class KB_API Log
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

// Core Log macros
#define KB_CORE_ERROR(...)  ::kb::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KB_CORE_WARN(...)   ::kb::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KB_CORE_INFO(...)   ::kb::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KB_CORE_TRACE(...)  ::kb::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KB_CORE_FATAL(...)  ::kb::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define KB_ERROR(...)  ::kb::Log::GetClientLogger()->error(__VA_ARGS__)
#define KB_WARN(...)   ::kb::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KB_INFO(...)   ::kb::Log::GetClientLogger()->info(__VA_ARGS__)
#define KB_TRACE(...)  ::kb::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KB_FATAL(...)  ::kb::Log::GetClientLogger()->fatal(__VA_ARGS__)
