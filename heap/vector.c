# include <stdio.h>
# include <stdlib.h>
# include "vector.h"

void print_vect(struct vector *vect)
{
  for(int i = 1; i < vect->size;++i)
    printf("%d |",vect->data[i]);
  printf("\n");
}


struct vector* vector_make(size_t capacity)
{
  struct vector *vect = malloc(sizeof(struct vector));
  vect->capacity = capacity;
  vect->size = 1;
  vect->data = malloc(sizeof(int) * capacity);
  return vect;
}

void vector_push_back(struct vector *vect, int x)
{
  vect->data[vect->size] = x;
  ++vect->size;
}

void freeVect(struct vector *vect)
{
  free(vect->data);
  free(vect);
}

