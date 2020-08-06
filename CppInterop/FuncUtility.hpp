#ifndef FUNC_UTILITY_IMPL_H
#define FUNC_UTILITY_IMPL_H

#define MY_OWN_LOGGER_CALL(msg, lvl) FuncUtility::spdLog(spdlog::source_loc{__FILE__, __LINE__, SPDLOG_FUNCTION}, lvl, msg)

template<typename T> void
FuncUtility::spdLog(spdlog::source_loc source, spdlog::level::level_enum lvl, const T &msg)
{
	dailyLogger()->log(source, lvl, msg);
}

#endif