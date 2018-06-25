//
// Created by wujc on 2018/6/25.
//
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include <time.h>

#define LIST_MAX 5

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