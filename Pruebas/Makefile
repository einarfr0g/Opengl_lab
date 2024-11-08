# Variables
CC = g++
SRC = glfw_loop.cpp
TARGET = programa2
LIBS = -lglfw -lGLEW -lGL
CFLAGS = -Wall -Wextra -std=c++11

# Default target
all: $(TARGET)

# Compile the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

# Clean up
clean:
	rm -f $(TARGET)

# Phony targets
.PHONY: all clean