CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

LIBS = -lmysyslog -lmysyslog-text -lmysyslog-json

all: mysyslog-client

mysyslog-client: src/mysyslog-client.o
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f src/*.o mysyslog-client

deb:
	# Deb package building logic

.PHONY: all clean deb
