# include "heap.h"

int main()
{
  int *tab = malloc(sizeof(int) * 8);
  tab[0] = 8;
  tab[1] = 5;
  tab[2] = 9;
  tab[3] = 1;
  tab[4] = 12;
  tab[5] = 18;
  tab[6] = 6;
  tab[7] = 2;

  heapSort(tab, 8);
  for(int i = 0; i < 8; ++i)
    printf("%d |", tab[i]);
  printf("\n");
  free(tab);
  return 0;
}
