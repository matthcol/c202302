APP=app
OBJS = main.o
CXXFLAGS += -std=c++11
CXX = g++

all: $(APP)

$(APP): $(OBJS)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(APP) $(OBJS)

