// *
// * Generic implementation of a queue.
// * Adapted from https://codereview.stackexchange.com/q/141238
// *

#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <string.h>

typedef struct Queue_
{
    size_t memSize;
    size_t size;
    struct QueueNode *head;
    struct QueueNode *tail;
} Queue;

int dequeue(Queue *, void *);
int enqueue(Queue *, const void *);
void queueClear(Queue *);
int queueEmpty(const Queue *);
int queueInit(Queue *, const size_t);
int queuePeek(const Queue *, void *);
size_t queueSize(const Queue *);

#endif