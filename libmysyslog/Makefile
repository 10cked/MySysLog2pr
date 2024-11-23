CC = gcc
CFLAGS = -Wall -g -fPIC
LDFLAGS =

LIBRARY = libmysyslog.a
OBJ = src/mysyslog.o

all: $(LIBRARY)

$(LIBRARY): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f $(OBJ) $(LIBRARY)

deb:
	# Deb package building logic

install: $(LIBRARY)
	cp $(LIBRARY) /usr/local/lib
	ldconfig

.PHONY: all clean deb install
