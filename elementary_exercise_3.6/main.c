#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>

#define LIST_MAX 5

int main() {
    link *t, *odd = NULL, *even = NULL;
    t = new_link();
    print_list(t);
    while (t != NULL) {
        odd = add_last(t->item, odd);
        t = t->next;
        if (t != NULL) {
            even = add_last(t->item, even);
        }else{
            break;
        }
        t = t->next;
    }
    t = concat_lists(odd, even);
    print_list(t);
    return 0;
}

link *concat_lists(link *first, link *second) {

    link *head = first;

    while (first->next != NULL)
        first = first->next;
    first->next = second;
    return head;
}

link *add_last(int n, link *t) {
    link *head = t, *new;
    new = new_node(n);
    if (t == NULL) {
        head = new;
    } else {
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = new;
    }
    return head;
}

void print_list(link *t) {
    while (t != NULL) {
        printf("%d ", t->item);
        t = t->next;
    }
    printf("\n");
}


link *new_link() {
    srand((unsigned) time(NULL));
    link *t = NULL, *new, *head;
    head = new_node(rand() % 100);
    for (int i = 0; i < LIST_MAX; ++i) {
        new = new_node(rand() % 100);
        if (t == NULL) {
            head = t = new;
        } else {
            t->next = new;
            t = t->next;
        }
    }
    return head;
}

link *new_node(int n) {
    link *t;
    t = malloc(sizeof(link));
    if (t != NULL) {
        t->item = n;
        t->next = NULL;
    }
    return t;
}