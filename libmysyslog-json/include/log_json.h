#ifndef LOG_JSON_H
#define LOG_JSON_H

#include "mysyslog.h"

void log_json(const char* msg, LogLevel level, const char* path);

#endif // LOG_JSON_H
