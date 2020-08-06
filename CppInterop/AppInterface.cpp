#include "FuncUtility.h"
#include "AppInterface.h"

void
LoggerInterop(const char* msg, spdlog::level::level_enum lvl, const char *filename_in, int line_in, const char *funcname_in)
{
	FuncUtility::spdLog(spdlog::source_loc{ filename_in, line_in, funcname_in }, lvl, msg);
}