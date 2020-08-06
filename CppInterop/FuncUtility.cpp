#include "FuncUtility.h"

std::shared_ptr<spdlog::logger> FuncUtility::dailyLogger()
{
	// Customize msg format for all loggers
	// https://github.com/gabime/spdlog/wiki/3.-Custom-formatting
	// Example logging format: [2014-10-31 23:46:59.678] [info] [my_file.cpp:123] [my_func] - Some message
	spdlog::set_pattern("[%Y-%m-%d %X.%e] [%^%l%$] [%s:%#] [%!] - %v");

	// Set the minimum log level that will trigger automatic flush.
	// This will trigger flush whenever debug or more severe messages are logged.
	spdlog::flush_on(spdlog::level::debug);

	// Create a daily logger - a new file is created every day on 2:30am.
	static std::shared_ptr<spdlog::logger> logger = spdlog::get("daily_logger"); 
	if (!logger) {
		logger = spdlog::daily_logger_mt("daily_logger", "logs/test.log", 2, 30);

		// Set specific logger's log level
		logger->set_level(spdlog::level::debug);
	}

	return logger;
}
