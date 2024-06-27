#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Kinebatic
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
#define KB_CORE_ERROR(...)  ::Kinebatic::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KB_CORE_WARN(...)   ::Kinebatic::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KB_CORE_INFO(...)   ::Kinebatic::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KB_CORE_TRACE(...)  ::Kinebatic::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define KB_CORE_FATAL(...)  ::Kinebatic::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define KB_ERROR(...)  ::Kinebatic::Log::GetClientLogger()->error(__VA_ARGS__)
#define KB_WARN(...)   ::Kinebatic::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KB_INFO(...)   ::Kinebatic::Log::GetClientLogger()->info(__VA_ARGS__)
#define KB_TRACE(...)  ::Kinebatic::Log::GetClientLogger()->trace(__VA_ARGS__)
#define KB_FATAL(...)  ::Kinebatic::Log::GetClientLogger()->fatal(__VA_ARGS__)
