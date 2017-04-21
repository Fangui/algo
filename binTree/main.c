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
  printf("%d\n", leafCount(tree));
  printTree(tree);
  printf("\n");
  tree = supNode(tree, 9);
  tree = supNode(tree, 25);
//  printTree(tree);
  tree = supNode(tree, 15);
  printTree(tree);
  printf("\n");
  freeTree(tree);/*


  struct binTree *tree = newBinTree(5, NULL, NULL);
  addBinTree(tree, 3);
  addBinTree(tree, 6);
  addBinTree(tree, 2);
  addBinTree(tree, 7);
  addBinTree(tree, 4);
  supNode(tree, 3);
  printTree(tree);
  freeTree(tree);*/
  return 0;
}
