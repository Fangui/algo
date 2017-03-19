# ifndef VECTOR_H_
# define VECTOR_H_

# include <stdio.h> 
# include <stdlib.h>
 
struct vector {
  int        capacity, size;
  int          *data;
};
 
struct vector* vector_make(size_t capacity);
 
void vector_push_back(struct vector *vect, int x);

void freeVect(struct vector *vect); 

void print_vect(struct vector *vect);
 
# endif
