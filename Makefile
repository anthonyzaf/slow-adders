CC = gcc

CFLAGS = -Wall -O0

SRC_DIR = src/

TARGETS = O-n-Adder O-n^2-Adder O-2^n-Adder O-n!-Adder O-n^n-Adder O-idk-Adder

all: $(TARGETS)

O-n-Adder: $(SRC_DIR)O-n-Adder.c
	$(CC) $(CFLAGS) -o O-n-Adder $(SRC_DIR)O-n-Adder.c

O-n^2-Adder: $(SRC_DIR)O-n^2-Adder.c
	$(CC) $(CFLAGS) -o O-n^2-Adder $(SRC_DIR)O-n^2-Adder.c

O-2^n-Adder: $(SRC_DIR)O-2^n-Adder.c
	$(CC) $(CFLAGS) -o O-2^n-Adder $(SRC_DIR)O-2^n-Adder.c

O-n!-Adder: $(SRC_DIR)O-n!-Adder.c
	$(CC) $(CFLAGS) -o O-n!-Adder $(SRC_DIR)O-n!-Adder.c

O-n^n-Adder: $(SRC_DIR)O-n^n-Adder.c
	$(CC) $(CFLAGS) -o O-n^n-Adder $(SRC_DIR)O-n^n-Adder.c

O-idk-Adder: $(SRC_DIR)O-idk-Adder.c
	$(CC) $(CFLAGS) -o O-idk-Adder $(SRC_DIR)O-idk-Adder.c

clean:
	rm -f $(TARGETS)