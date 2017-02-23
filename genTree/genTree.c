# include "genTree.h"

struct genTree *newGenTree(int key)
{
  struct genTree *tree = calloc(1, sizeof(struct genTree));
  tree->key = key;
  return tree;
}

void addChildren(struct genTree *tree, struct genTree *insTree)
{
  if(tree->nbChildren >= tree->capacity)
  {
    tree->capacity += 3;
    tree->children = realloc(tree->children, sizeof(struct genTree) * tree->capacity);
  }
  tree->children[tree->nbChildren] = insTree;
  ++tree->nbChildren;
}

static size_t _gt_size(struct genTree *tree)
{
  for(size_t i = 0; i < tree->nbChildren; ++i)
    return 1 + gt_size(tree->children[i]);
  return 1;
}

size_t gt_size(struct genTree *tree)
{
  if(tree)
    return _gt_size(tree);
  return 0;
}

void printTree(struct genTree *tree)
{
  for(size_t i = 0; i < tree->nbChildren; ++i)
  {
    printf("%d->fils n %zu key = %d\n", tree->key, i, tree->children[i]->key);
    printTree(tree->children[i]);
  }
}

void freeTree(struct genTree *tree)
{
  for(size_t i = 0; i < tree->nbChildren; ++i)
    freeTree(tree->children[i]);

  if(tree->nbChildren)
    free(tree->children);
  free(tree);
}
