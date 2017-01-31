# include <stdio.h>
# include <stdlib.h>

struct rbt
{
  int key, red;
  struct rbt **left, **right;
};

void buildRbt();

void printTree(struct rbt);

void rr(struct rbt);



