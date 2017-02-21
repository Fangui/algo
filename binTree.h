# include <stdlib.h>
# include <stdio.h>

struct binTree
{
  int node;
  struct binTree *left, *right;
};

struct binTree *newBinTree(int node, struct binTree *left, struct binTree *right);

void freeTree(struct binTree *tree);

void printTree(struct binTree *tree);

void addBinTree(struct binTree *tree, int node);

