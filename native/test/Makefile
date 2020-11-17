CC=gcc
CPP=g++
CFLAGS=-O0 -g -Iinclude -I../include -I../src/include -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux
CPPFLAGS=$(CFLAGS) -fno-rtti -fno-exceptions -std=c++11
LDFLAGS=-L../build -lfancier -lfanciertiling

SRC=$(wildcard *.c *.cpp)
COBJS=$(filter %.o,$(SRC:%.c=build/%.o))
CPPOBJS=$(filter %.o,$(SRC:%.cpp=build/%.o))

.PHONY: all
all: $(COBJS) $(CPPOBJS)

.PHONY: test
test: $(COBJS) $(CPPOBJS)
	@$(foreach prog,$^,echo "\nTest $(prog):"; LD_LIBRARY_PATH=../build ./$(prog);)

build/%.o: %.c dirs
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

build/%.o: %.cpp dirs
	$(CPP) $(CPPFLAGS) $< -o $@ $(LDFLAGS)

.PHONY: dirs
dirs:
	@mkdir -p build

.PHONY: clean
clean:
	@rm -fr build testdir
