CC = gcc
CFLAGS = -O0 -g3
TESTS = alpt-a alpt-b alpt-c alpt-d
     
all: $(TESTS)
     
$(TESTS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(TESTS)
