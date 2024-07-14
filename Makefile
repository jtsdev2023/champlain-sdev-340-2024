# Define compiler
CC=g++

# Define compiler flags
CFLAGS=-Wall -g

# Define the target executable
TARGET=run

# Define source files
SOURCES=main_func.cpp class-automobile.cpp

# Define object files
OBJECTS=$(SOURCES:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
	rm -f $(OBJECTS) $(TARGET)