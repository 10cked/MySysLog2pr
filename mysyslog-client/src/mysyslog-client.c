#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include "mysyslog.h"

int main(int argc, char *argv[]) {
    int level = INFO;
    int driver = 1;  // Default to text driver
    int format = 1;  // Default to text format
    const char* msg = NULL;
    const char* path = "/var/log/mysyslog.log";

    int opt;
    while ((opt = getopt(argc, argv, "m:l:d:f:p:")) != -1) {
        switch (opt) {
        case 'm': msg = optarg; break;
        case 'l': level = atoi(optarg); break;
        case 'd': driver = atoi(optarg); break;
        case 'f': format = atoi(optarg); break;
        case 'p': path = optarg; break;
        }
    }

    if (msg != NULL) {
        mysyslog(msg, level, driver, format, path);
    }

    return 0;
}
