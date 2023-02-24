OBJS = point.o main.o
CFLAGS += -g1 -O0 -std=c99
LDFLAGS += -lm
CC = gcc

all: geo

geo: $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

main.o: point.h
point.o: point.h

clean:
	rm -f geo $(OBJS)

version:
	$(CC) --version
