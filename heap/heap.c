# include "heap.h"

/*
static void swp(struct node *a, struct node *b)
{
  int c = a->key;
  a->key = b->key;
  b->key = c;
}*/

struct heap *create_heap()
{
  struct heap *heap = calloc(1, sizeof(struct heap));
  return heap;
}

struct node *find_node(struct heap *heap, int i)
{
  struct node *node = NULL;
  if(heap)
  {
    if(i > heap->size)
      return NULL;
    struct queue *queue = malloc(sizeof(struct queue));
    queue_init(queue);
    queue_push(queue, heap);
    int cpt = 0;
    while(cpt < i)
    {
      node = queue_pop(queue);
      if(node->lchild)
      {
        queue_push(queue, node->lchild);
        if(node->rchild)
          queue_push(queue, node->rchild);
      }
    }
    freeQueue(queue);
  }
  return node;
}


