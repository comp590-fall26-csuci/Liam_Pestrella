CC = gcc
CFLAGS = -Wall -Wextra -Iheaders
LDFLAGS = -lm
TARGET = fibonacci

SOURCES = main.c fibonacci.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

main.o: main.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c main.c

fibonacci.o: fibonacci.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all run clean