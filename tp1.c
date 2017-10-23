#include <stdio.h>

unsigned int_width(int i)
{
  unsigned len = 0;
  if (i <= 0)
  {
    i = -i;
    ++len;
  }
  while (i > 0)
  {
    i /= 10;
    ++len;
  }
  return len;
}

unsigned ints_width(const int* tab, unsigned count)
{
  int max = tab[0];
  int min = tab[0];
  for (unsigned i = 0; i < count; ++i)
  {
    if (tab[i] > max)
      max = tab[i];
    if (tab[i] < min)
      min = tab[i];
  }
  unsigned val = int_width(max);
  unsigned val2 = min < 0 ? int_width(min) : 0;
  return val > val2 ? val : val2;
}

void print_int_array(FILE* out, const int* tab, unsigned count)
{
  unsigned cpt = 0;
  unsigned val = ints_width(tab, count) + 1;
  unsigned len = int_width(count);
  unsigned size = 0;
  for (unsigned i = 0; i < count; ++i)
  {
    size = 0;
    if (cpt + val > 80)
    {
      cpt = 0;
      fprintf(out, "\n");
    }
    if (cpt == 0)
    {
      size = len - int_width(i);
      for (unsigned i = 0; i < size; ++i)
        fprintf(out, " ");
      fprintf(out, "%s%u]", "[", i);
      size = len + 2;
    }
    fprintf(out, "%*d", val, tab[i]);
    cpt += val + size;
  }
  fprintf(out, "\n");
}

/*
void insert_sort(int* tab, unsigned count)
{
  for (unsigned i = 1; i < count;  ++i)
  {
    int b = 0;
    int key = tab[i];
    unsigned j = i - 1;
    while (j > 0 && tab[j] > key)
    {
      tab[j + 1] = tab[j];
      --j;
    }
    if (j == 0 && tab[j] > key)
    {
      b = 1;
      tab[j + 1] = tab[j];
    }
    if (b)
      tab[j] = key;
    else
      tab[j + 1] = key;
  }
}*/

int main()
{
  int a[] = {
  1, 2, 3, 4, 5, 6, 13, -35, 129, -4, 123, -4555, 1341, 2432, 111, 0, 1230
};
int b[] = {
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6,
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6,
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6,
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6,
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6,
  1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6
};
puts("-- a[]");
print_int_array(stdout, a, sizeof(a)/sizeof(*a));
puts("\n-- b[]");
print_int_array(stdout, b, sizeof(b)/sizeof(*b));
puts("\n-- b[] after b[8] = 123456");
b[8] = 123456;
print_int_array(stdout, b, sizeof(b)/sizeof(*b));
puts("\n-- a[0..9]");
print_int_array(stdout, a, 10);
puts("\n-- a[0..10]");
print_int_array(stdout, a, 11);
/*
int a[] = {
  1, 2, 3, 4, 5, 6, 13, -35, 129, -4, 123, -4555, 1341, 2432, 111, 0, 1230
};

unsigned asize = sizeof(a)/sizeof(*a);
puts("before");
print_int_array(stdout, a, asize);
insert_sort(a, asize);
puts("after");
print_int_array(stdout, a, asize);
*/
  return 0;
}
