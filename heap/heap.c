# include "heap.h"

static void swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

void heapPush(struct vector *vect, int data)
{
  int size = vect->size, nSize = size / 2;
  vector_push_back(vect, data);
  while(size > 1 && data > vect->data[nSize])
  {
    swap(&vect->data[size], &vect->data[nSize]);
    size = nSize;
    nSize /= 2;
  }
}

int heapPop(struct vector *vect)
{
  --vect->size;
  swap(&vect->data[1], &vect->data[vect->size]);

  int max = vect->data[vect->size];
  int i = 1, j = 2;

  while(j + 1 < vect->size)
  {
    if(vect->data[j] < vect->data[j + 1])
      ++j;
    if(vect->data[i] < vect->data[j])
      swap(&vect->data[i], &vect->data[j]);
    else
      break;
    i = j;
    j *= 2;
  }
  if(j + 1 == vect->size && vect->data[j] > vect->data[i])
    swap(&vect->data[j], &vect->data[i]);

  return max;
}

void heapSort(int *nums, int numsSize)
{
  struct vector *vect = vector_make(numsSize + 1);
  for(int i = 0; i < numsSize; ++i)
    heapPush(vect, nums[i]);
  for(int i = numsSize - 1; i >= 0; --i)
    nums[i] = heapPop(vect);
  freeVect(vect);
}
