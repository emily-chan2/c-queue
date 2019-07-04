#include "Queue.h"
#include <stdio.h>

typedef struct _Item
{
    int a;
    double b;
    char c;
} Item;

int main(int argc, char **argv)
{
    // Initialize data
    Queue queue;
    queueInit(&queue, sizeof(Item));
    const int ints[5] = {1001, 1002, 1003, 1004, 1005};
    const double doubles[5] = {1001.111111, 1002.222222, 1003.333333, 1004.444444, 1005.555555};
    const char chars[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("\n");

    // Enqueue items
    for (int i = 0; i < 5; ++i)
    {
        Item item = {ints[i], doubles[i], chars[i]};
        printf("Enqueuing {item.a: %d, item.b: %f, item.c: %c}.\n", item.a, item.b, item.c);
        enqueue(&queue, &item);
    }

    printf("\nQueue size is %lu.\n\n", queueSize(&queue));

    // Dequeue items
    for (int i = 0; i < 5; ++i)
    {
        Item item;
        dequeue(&queue, &item);
        printf("Dequeuing {item.a: %d, item.b: %f, item.c: %c}.\n", item.a, item.b, item.c);
    }

    printf("\nQueue is empty? ");
    if (queueEmpty(&queue))
        printf("Yes.\n\n");
    else
        printf("No.\n\n");

    return 0;
}

