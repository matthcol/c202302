LIBD = libgeo.so
LIBST = libgeo.a
OBJS = point.o calcul.o
CFLAGS += -g1 -O0 -std=c99
LDFLAGS += -lm -shared
CC = gcc

all: $(LIBD) $(LIBST)

$(LIBD): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(LIBST): $(OBJS)
	ar -rcs $@  $^

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

point.o: point.h
calcul.o: point.h

clean:
	rm -f $(LIBD) $(LIBST) $(OBJS)

version:
	$(CC) --version

install: $(LIBD) $(LIBST)
	cp $(LIBD) $(INSTALLDIR)/lib/
	cp $(LIBST) $(INSTALLDIR)/lib/
	cp point.h $(INSTALLDIR)/include/