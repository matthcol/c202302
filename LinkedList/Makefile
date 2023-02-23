APP=app
OBJS = linkedlist.o main.o
CFLAGS += -g1 -O0 -std=c99
# LDFLAGS += -lm
CC = gcc

all: $(APP)

$(APP): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

main.o: linkedlist.h
linkedlist.o: linkedlist.h

clean:
	rm -f $(APP) $(OBJS)

