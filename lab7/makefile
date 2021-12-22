CC=gcc
CFLAGS=-I -Wall -Wextra
SRCS = $(wildcard *.c)

PROGS = $(patsubst %.c,%,$(SRCS))

all: $(PROGS)

%: %.c
		$(CC) $(CFLAGS) -o $@ $< -lm -lgraph

clean: 
		rm -f $(PROGS)

