CC = gcc
CFLAGS = -Wall -Wextra -Iheaders
LDFLAGS = -lm

TARGET = fibonacci
TEST_TARGET = test_fibonacci_and_golden

SOURCES = main.c fibonacci.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

main.o: main.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c main.c

fibonacci.o: fibonacci.c headers/fibonacci.h
	$(CC) $(CFLAGS) -c fibonacci.c

$(TEST_TARGET): test_fibonacci_and_golden.c fibonacci.c headers/fibonacci.h headers/utest.h
	$(CC) $(CFLAGS) test_fibonacci_and_golden.c fibonacci.c -o $(TEST_TARGET) $(LDFLAGS)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET) $(TEST_TARGET)

.PHONY: all run test clean