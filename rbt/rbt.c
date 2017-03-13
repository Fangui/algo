# include "rbt.h"

struct rbt *buildRbt()
{
  struct rbt *rbt = malloc(sizeof(struct rbt));
  rbt->left = NULL;
  rbt->right = NULL;
  rbt->key = 0;
  rbt->red = 0;
  return rbt;
}
void printTree(struct rbt *rbt)
{
  if(rbt)
  {
    printf("%d\n", rbt->key);
    printTree(rbt->left);
    printTree(rbt->right);
  }
}

    3 	 RLR		 3
 1B       ->		2B		2
    2B	     	       1B	    1R      3R	
void rr(struct rbt *rbt)
{
  struct rbt *aux = rbt->left;
  rbt->left = aux->right;
  aux->right = rbt;
  rbt = aux;
  aux->red = 0;
  aux->right->red = 1;
}

void rlr(struct rbt *rbt)
{
  struct rbt *aux = rbt->left;
  struct rbt 

} 
