# include "binTree.h"

int main()
{
  struct binTree *tree = newBinTree(20, NULL, NULL);
  addBinTree(tree, 15);
  addBinTree(tree, 25);
  addBinTree(tree, 22);
  addBinTree(tree, 17);
  printTree(tree);
  return 0;
}
