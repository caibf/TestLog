#ifndef APP_INTERFACE_H
#define APP_INTERFACE_H

extern "C" __declspec(dllexport) 
void LoggerInterop(const char* msg, spdlog::level::level_enum lvl, const char *filename_in, int line_in, const char *funcname_in);

#endif //APP_INTERFACE_H