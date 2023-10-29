CC = gcc
CFLAGS = -Wall

# List of source files
SRCS = main.c atm.c

# List of object files to be generated from source files
OBJS = $(SRCS:.c=.o)

# Target executable
TARGET = atm

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rules to build object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files and the target executable
clean:
	rm -f $(OBJS) $(TARGET)
