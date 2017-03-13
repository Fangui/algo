# ifndef TREE_H
# define TREE_H

# include "../queue.h"

struct genTree
{
  int key;
  size_t nbChildren, capacity;
  struct genTree **children;
};

struct genTree *newGenTree(int key);

void addChildren(struct genTree *tree, struct genTree *insTree);

size_t gt_size(struct genTree *tree);

int gt_height(struct genTree *tree);

void freeTree(struct genTree *tree);

void printTree(struct genTree *tree);

#endif
