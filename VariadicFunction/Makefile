APP=app
OBJS = main.o
CFLAGS += -g1 -O0 -std=c99
# LDFLAGS += -lm
CC = gcc

all: $(APP)

$(APP): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(APP) $(OBJS)