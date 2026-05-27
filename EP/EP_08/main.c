#include "linkedlist.h"
#include <stdio.h>

int main(void)
{
    LinkedList *l1 = ll_create();
    LinkedList *l2 = ll_create();

    for (int i = 0; i < 3; i++) {
        ll_insert(l1, i);
    }
        
    for (int i = 3; i < 6; i++) {
        ll_insert(l2, i);
    }

    ll_print(l1);
    ll_print(l2);

    LinkedList *listaconcatenada = ll_concatenate(l1, l2);
    ll_print(listaconcatenada);

    ll_free(listaconcatenada);
    ll_free(l1);
    ll_free(l2);

    return 0;
}