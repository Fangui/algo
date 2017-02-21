# include "queue.h"

void queue_init(struct queue *queue)
{
  queue->size = 0;
}

int queue_is_empty(struct queue *queue)
{
  return queue->size == 0;
}

void queue_push(struct queue *queue, void *elm)
{
  struct list *list = malloc(sizeof(struct list));
  list->data = elm;
  
  if(queue_is_empty(queue))
  {
    queue->store = list;
    list->next = list;
  }

  else
  {
    list->next = queue->store->next;
    queue->store->next = list;
    queue->store = list;
  }
  queue->size++;
}

void* queue_pop(struct queue *queue)
{
  if (queue_is_empty(queue))
    return NULL;

  queue->size--;
  struct list *list = queue->store->next;
  void *elm = list->data;

  queue->store->next = queue->store->next->next;

  free(list);

  return elm;
}

void clearQueue(struct queue *queue)
{
  struct list *list = NULL;
  while(queue->size > 0)
  {
    list = queue->store;
    queue->store = queue->store->next;
    free(list);
    --queue->size;
  }
}
