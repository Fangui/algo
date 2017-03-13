# ifndef EPITA_S3_QUEUE_H_
# define EPITA_S3_QUEUE_H_

# include "stdio.h"
# include "stdlib.h"

struct list {
  struct list *next;
  void        *data;
};
 
struct queue {
  struct list *store;
  size_t       size;
};
 
void queue_init(struct queue *queue);
 
int queue_is_empty(struct queue *queue);
 
void queue_push(struct queue *queue, void *elm);
 
void* queue_pop(struct queue *queue);

void freeQueue(struct queue *queue);
 
# endif /* EPITA_S3_QUEUE_H_ */
