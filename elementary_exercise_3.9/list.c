//
// Created by mrun on 2018/6/27.
//
#include "list.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define LIST_MAX 5

link* new_link(){
    link* t = NULL,*head,*new;

    srand((unsigned)time(NULL));
    for (int i = 0; i < LIST_MAX; ++i) {
        new = new_node(rand()%100);
        if ( t == NULL){
            t = head = new;
        }else{
            t->next = new;
            t = t->next;
        }
    }
    return head;
}

link* new_node(int n){
    link* t;

    t = malloc(sizeof(link));
    if(t != NULL){
        t->item = n;
        t->next = NULL;
    }
    return t;
}

void print_list(link* t){
    while (t != NULL) {
        printf("%d ", t->item);
        t = t->next;
    }
    printf("\n");
}

void delete_node(link*h,link*t){
    link* head = h;
    if (t->next != NULL){
        h->next = h->next->next;
    }
}