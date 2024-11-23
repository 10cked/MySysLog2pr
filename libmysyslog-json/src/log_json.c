#include <stdio.h>
#include <time.h>
#include "log_json.h"

void log_json(const char* msg, LogLevel level, const char* path) {
    FILE* f = fopen(path, "a");
    if (!f) return;

    time_t t = time(NULL);
    struct tm* tm_info = localtime(&t);

    // Format log entry in JSON
    fprintf(f, "{\"timestamp\": %ld, \"log_level\": \"%d\", \"process\": \"example-app\", \"message\": \"%s\"}\n", t, level, msg);
    fclose(f);
}
