CC = gcc
CFLAGS = -O0 -Wall -Wextra -Werror -pedantic -std=c99
TESTS = alpt-a alpt-b alpt-c

all: $(TESTS)
     
$(TESTS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TESTS)
