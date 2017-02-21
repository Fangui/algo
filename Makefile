CC=gcc
 
CPPFLAGS=

CFLAGS= -Wall -Wextra -Werror -std=c99 -pedantic -o -g
LDFLAGS=
LDLIBS= -lm

SRC= queue.c binTree.c 

OBJ= ${SRC:.c=.o}
 
all: main
 
main: ${OBJ}
 
clean:
	rm -f ${OBJ}
	rm -f main
	rm -f .*.swp
	clear

# END
