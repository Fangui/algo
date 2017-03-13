# include <stdio.h>
# include <stdlib.h>

struct rbt
{
  int key, red;
  struct rbt *left, *right;
};

struct rbt *buildRbt();

void printTree(struct rbt *rbt);

void rr(struct rbt *rbt);



