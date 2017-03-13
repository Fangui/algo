# include "genTree.h"

int main()
{
  struct genTree *tree1 = newGenTree(20);
  struct genTree *tree2 = newGenTree(15);
  struct genTree *tree3 = newGenTree(17);
  struct genTree *tree4 = newGenTree(18);
 
  addChildren(tree3, tree4);
  addChildren(tree1, tree2);
  addChildren(tree1, tree3);
  printf("%zu\n", gt_size(tree1));
  printf("%d\n", gt_height(tree1));
  printTree(tree1);
  freeTree(tree1);

  return 0;
}
