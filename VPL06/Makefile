CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/
all: main

produto: 
	$(CC) $(CFLAGS) -c src/produto.cpp -o build/produto.o
venda:
	$(CC) $(CFLAGS) -c src/venda.cpp -o build/venda.o
util:
	$(CC) $(CFLAGS) -c src/util.cpp -o build/util.o
pizza:
	$(CC) $(CFLAGS) -c src/pizza.cpp -o build/pizza.o
acai: 
	$(CC) $(CFLAGS) -c src/acai.cpp -o build/acai.o
cachorro_quente:
	$(CC) $(CFLAGS) -c src/cachorro_quente.cpp -o build/cachorro_quente.o
pedido:
	$(CC) $(CFLAGS) -c src/pedido.cpp -o build/pedido.o
main: util produto venda pizza acai cachorro_quente pedido
	$(CC) $(CFLAGS) build/acai.o build/cachorro_quente.o build/pedido.o build/venda.o build/produto.o build/util.o build/pizza.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)
