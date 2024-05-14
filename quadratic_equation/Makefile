CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: check

check:
	$(CC) $(CFLAGS) quadratic_equation.c test_quadratic_equation.c -o test_result
	./test_result
clean:
	rm -rf test_result
	
rebuild: clean all