CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

LIBS = -lmysyslog -lmysyslog-text -lmysyslog-json

all: mysyslog-daemon

mysyslog-daemon: src/mysyslog-daemon.o
$(CC) -o $@ $^ $(LIBS)

clean: rm -f src/*.o mysyslog-daemon

deb: # Deb package building logic

.PHONY: all clean deb