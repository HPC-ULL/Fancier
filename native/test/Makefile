CC?=gcc
CXX?=g++
CPPFLAGS=-O2 -g -Wall -Wno-dangling-else -Iinclude -I../core/include -I../plugin/tiling/include \
    -I${JAVA_HOME}/include -I${JAVA_HOME}/include/linux
CXXFLAGS=-fno-rtti -fno-exceptions -std=c++11
LDFLAGS=-L../build -L../build/plugin -lfancier -lfancier_tiling -lOpenCL -lm

SRC=$(wildcard *.c *.cpp)
COBJS=$(filter %.o,$(SRC:%.c=build/%.o))
CPPOBJS=$(filter %.o,$(SRC:%.cpp=build/%.o))

.PHONY: all
all: $(COBJS) $(CPPOBJS)

.PHONY: test
test: $(COBJS) $(CPPOBJS)
	@$(foreach prog,$^,echo "\nTest $(prog):"; LD_LIBRARY_PATH=../build:../build/plugin ./$(prog);)

build/%.o: %.c dirs
	$(CC) $(CPPFLAGS) $< -o $@ $(LDFLAGS)

build/%.o: %.cpp dirs
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

.PHONY: dirs
dirs:
	@mkdir -p build

.PHONY: clean
clean:
	@rm -fr build testdir
