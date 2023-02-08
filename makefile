CC = gcc -pthread
CFLAGS = -Wall -Werror
OUTPUT = Thread.o
DEBUG =  -g
SOURCES = Thread.c

all:
	$(CC) $(SOURCES) $(CFLAGS) -o $(OUTPUT)
debug:
	$(CC) $(SOURCES) $(CFLAGS) -o $(OUTPUT) 
clean:
	rm -f $(OUTPUT)
fresh:
	make clean
	make all
