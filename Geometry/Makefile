OBJS = point.o main.o
CFLAGS += -g1 -O0 -std=c99
# LDFLAGS +=  <flags pour la phase de link>

all: geo

geo: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

main.o: point.h
point.o: point.h

clean:
	rm -f geo $(OBJS)
