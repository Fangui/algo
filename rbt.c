# include "rbt.h"

struct rbt buildRbt()
{
  struct rbt = malloc(sizeof(struct rbt);
  rbt->left = NULL;
  rbt->right = NULL;
  rbt->key = 0;
  rbt->red = 0;
  return rbt;
}
void printTree(struct rbt)
{
  if(rbt)
  {
    print("%d\n", rbt->key);
    printTree(rbt->left);
    printTree(rbt->right);
  }
}

void rr(struct rbt)
{
  struct rbt 

}
