# include "../queue.h"

struct node
{
  int key;
  struct node *parent;
  struct node *lchild;
  struct node *rchild;
};

struct heap
{
  int size;
  struct node *root;
};

struct heap *create_heap();

struct node *find_node(struct heap *heap, int i);

void add_key(struct heap *heap, int key);

int pop(struct heap *heap);

void delete_heap(struct heap *heap);

void print(struct heap *heap);
