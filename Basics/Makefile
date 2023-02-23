APP=app
OBJS = utils.o playground.o arrays.o app.o
CFLAGS += -g1 -O0
# LDFLAGS += -lm
CC = gcc

all: $(APP)

$(APP): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

arrays.o: arrays.h
playground.o: playground.h
utils.o: utils.h
main.o: arrays.h playground.h utils.h
#		mytypes.h

clean:
	rm -f $(APP) $(OBJS)

