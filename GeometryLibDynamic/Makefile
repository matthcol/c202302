LIB=libgeo.so
OBJS = point.o
CFLAGS += -g1 -O0 -std=c99
LDFLAGS += -lm -shared
CC = gcc

all: libgeo.so

$(LIB): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

point.o: point.h

clean:
	rm -f $(LIB) $(OBJS)

version:
	$(CC) --version

install: $(LIB)
	cp $(LIB) $(INSTALLDIR)/lib/
	cp point.h $(INSTALLDIR)/include/