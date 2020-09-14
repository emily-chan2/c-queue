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
    const int ints[5] = {10, 20, 30, 40, 50};
    const double doubles[5] = {10.1, 10.2, 10.3, 10.4, 10.5};
    const char chars[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("\n");

    // Enqueue items
    for (int i = 0; i < 5; ++i)
    {
        Item item = {ints[i], doubles[i], chars[i]};
        printf("Enqueuing {item.a: %d, item.b: %.1f, item.c: %c}\n", item.a, item.b, item.c);
        enqueue(&queue, &item);
    }

    printf("\nQueue size is %lu\n\n", queueSize(&queue));

    // Dequeue items
    for (int i = 0; i < 5; ++i)
    {
        Item item;
        dequeue(&queue, &item);
        printf("Dequeuing {item.a: %d, item.b: %.1f, item.c: %c}\n", item.a, item.b, item.c);
    }

    printf("\nQueue is empty? ");
    if (queueEmpty(&queue))
        printf("Yes\n\n");
    else
        printf("No\n\n");

    return 0;
}