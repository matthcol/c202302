APP=app
OBJS = itertools.o main.o
CFLAGS += -g1 -O0 -std=c99
LDFLAGS += -lm
CC = gcc

all: $(APP)

$(APP): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

itertools.o: itertools.h
main.o: itertools.h

clean:
	rm -f $(APP) $(OBJS)

