#ifndef LOG_TEXT_H
#define LOG_TEXT_H

#include "mysyslog.h"

void log_text(const char* msg, LogLevel level, const char* path);

#endif // LOG_TEXT_H
