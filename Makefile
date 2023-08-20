# Name of the project
PROJ_NAME=operacoes
 
# .cpp files
CPP_SOURCE=$(wildcard *.cpp)

# define the C source files
SRCS = operacoes.cpp

# Object files
OBJS=$(patsubst %.cpp,%.o,$(CPP_SOURCE)))
 
# Compiler and linker
CC=g++
 
# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

#
# Compilation and linking
#
all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJS)
	$(CC) -o -std=gnu++17 $@ $^

%.o: %.cpp
	$(CC) $(CC_FLAGS) -c $<

clean:
	rm -rf $(PROJ_NAME) *.o