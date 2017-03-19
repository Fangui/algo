CC=gcc
 
CPPFLAGS=

CFLAGS= -Wall -Wextra -Werror -std=c99 -pedantic -o -02
LDFLAGS=
LDLIBS= 

SRC= heap.c vector.c

OBJ= ${SRC:.c=.o}
 
all: main
 
main: ${OBJ}
 
clean:
	rm -f ${OBJ}
	rm -f main
	rm -f .*.swp
	clear

# END
