CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main

#fogao:
#
#geladeira:
#
#estoque:
#

# Remova as tres linhas abaixo
old:
	@mkdir build/old/
	$(CC) $(CFLAGS) -c src/old.cpp -o build/old.o

# Modifique a funcao main
main: old
	$(CC) $(CFLAGS) build/old.o src/main.cpp -o $(TARGET)

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)