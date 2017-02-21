# include "binTree.h"

struct binTree *newBinTree(int node, struct binTree *left, struct binTree *right)
{
  struct binTree *tree = malloc(sizeof(struct binTree));
  tree->left = left;
  tree->right = right;
  tree->node = node;
  return tree;
}

void freeTree(struct binTree *tree)
{
  if(tree)
  {
    freeTree(tree->left);
    freeTree(tree->right);
    free(tree);
  }
}

void printTree(struct binTree *tree)
{
  if(tree)
  {
    printf("%d\n", tree->node);
    printTree(tree->left);
    printTree(tree->right);
  }
}

void addBinTree(struct binTree *tree, int node)
{
  if(tree)
  {
    if(node > tree->node)
    {
      if(!tree->right)
      {
        struct binTree *ins = newBinTree(node, NULL, NULL);
        tree->right = ins;
      }
      else
        addBinTree(tree->right, node);
    }
    else if(node < tree->node)
    {
      if(!tree->left)
      {
        struct binTree *ins = newBinTree(node, NULL, NULL);
        tree->left = ins;
      }
      else
        addBinTree(tree->left, node);
    }
  }
}
