# include "binTree.h"

int main()
{
  struct binTree *tree = newBinTree(20, NULL, NULL);
  addBinTree(tree, 15);
  addBinTree(tree, 25);
  addBinTree(tree, 22);
  addBinTree(tree, 17);
  addBinTree(tree, 0);
  addBinTree(tree, 2);
  printTree(tree);
  printf("%d\n", findValue(tree, 15));
  printf("%d\n", findValue(tree, 5));
  printf("%d\n", height(tree));
  freeTree(tree);
  return 0;
}
