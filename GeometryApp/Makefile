# Makefile for application linked with dynamic lib
APP = geo
OBJS = main.o
INCLUDEDIR=$(INSTALLDIR)/include
LIBDIR=$(INSTALLDIR)/lib
CFLAGS += -g1 -O0 -std=c99
LDFLAGS += -lgeo
CC = gcc


all: $(APP)

$(APP): $(OBJS)
	$(CC) -o $@ $^ -L $(LIBDIR) $(LDFLAGS)

%.o: %.c
	$(CC) -c $(CFLAGS) -I $(INCLUDEDIR) -o $@ $<

clean:
	rm -f $(APP) $(OBJS)

version:
	$(CC) --version
