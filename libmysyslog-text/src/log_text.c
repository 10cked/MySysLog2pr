#include <stdio.h>
#include <time.h>
#include "log_text.h"

void log_text(const char* msg, LogLevel level, const char* path) {
    FILE* f = fopen(path, "a");
    if (!f) return;

    time_t t = time(NULL);
    struct tm* tm_info = localtime(&t);

    // Format log entry
    fprintf(f, "%ld %d example-app %s\n", t, level, msg);
    fclose(f);
}
