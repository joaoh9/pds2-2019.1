PP = g++

CFLAGS = -Wall -std=c++11 -Werror

OBJ = main.o Matrix.o Operations.o

DEPS = Matrix.hpp Operations.hpp

VFLAGS = --leak-check=full --leak-resolution=high --show-reachable=yes --track-origins=yes -Werror

EXEC = ./exe

all: exe

exe: $(OBJ)
	$(PP) $(CFLAGS) $^ -o $@

%.o: %.c $(DEPS)
	$(PP) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o exe;

valgrind:
	valgrind $(VFLAGS) $(EXEC)

test:
	$(EXEC)

time:
	time $(EXEC)
