#ifndef FUNC_UTILITY_H
#define FUNC_UTILITY_H

#include <spdlog/spdlog.h>
#include <spdlog/sinks/daily_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>

class FuncUtility
{
public:
	template<typename T> static void
	spdLog(spdlog::source_loc source, spdlog::level::level_enum lvl, const T &msg);

private:
	static std::shared_ptr<spdlog::logger> dailyLogger();
};

#include "FuncUtility.hpp"

#endif