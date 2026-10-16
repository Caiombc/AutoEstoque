SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:src/%.cpp=bin/%.o)

all: bin/app.exe

bin/app.exe: $(OBJS)
	g++ $^ -o $@

bin/%.o: src/%.cpp
	@mkdir -p bin
	g++ -c $< -o $@

clean:
	rm -f bin/*.o bin/*.exe
