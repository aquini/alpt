CC = gcc
CFLAGS = -O0 -g3 -Wall -Wextra -ansi
TESTS = alpt-a alpt-b alpt-c
     
all: $(TESTS)
     
$(TESTS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(TESTS)
