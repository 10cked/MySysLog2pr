#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "mysyslog.h"

static volatile int keep_running = 1;

void int_handler(int dummy) {
    keep_running = 0;
}

int main() {
    signal(SIGINT, int_handler);
    signal(SIGTERM, int_handler);

    const char* path = "/var/log/mysyslog.log";
    int driver = 1;  // Default to text driver
    int format = 1;  // Default to text format

    while (keep_running) {
        mysyslog("Daemon log message", INFO, driver, format, path);
        sleep(60);  // Log every minute
    }

    return 0;
}
