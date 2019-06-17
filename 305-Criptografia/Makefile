#Comandos para uso do makefile:
#<make> -> compilação do codigo
#<make valgrind> -> depurar e executar o codigo usando o valgrind passando os valores de entrada por input
#<make test> -> executar o codigo passando as entradas
#<make time> -> executa o codigo passando as entradas e retornando tambem o tempo de execução.
#<make clean> -> remove os arquivos .o, executavel, as estantes, o arquivo ordenado e o indice.

PP = g++

CFLAGS = -Wall -std=c++11

OBJ = main.o Encoder.o Decoder.o

DEPS = Encoder.hpp Decoder.hpp

VFLAGS = --leak-check=full --leak-resolution=high --show-reachable=yes --track-origins=yes

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
