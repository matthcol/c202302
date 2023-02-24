LIBD = libplg.so
HEADER = plg.h
OBJS = plg.o
CFLAGS += -g0 -O2
LDFLAGS += -shared
CC = gcc

all: $(LIBD)

$(LIBD): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

mylib.o: mylib.h

clean:
	rm -f $(LIBD) $(OBJS)

install: $(LIBD)
	cp $(LIBD) $(INSTALLDIR)/lib/
	cp $(HEADER) $(INSTALLDIR)/include/