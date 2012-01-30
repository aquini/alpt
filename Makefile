CC = gcc
CFLAGS = -O0 -g3
TESTS = alpt-a alpt-b
     
all: $(TESTS)
     
$(TESTS): %: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(TESTS)
