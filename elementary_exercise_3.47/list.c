//
// Created by mrun on 2018/7/23.
//

#include "list.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define MAX 5

void print_list(link *t){
    while(t != NULL){
        printf("%d",t->item);
        t = t->next;
    }
    printf("\n");
}

link* new_node(int n){
    link *t;

    t = malloc(sizeof(link));
    if (t != NULL){
        t->item = n;
        t->next = NULL;
    }
    return t;
}

link* new_link(){
    srand((unsigned) time(NULL));
    link *t = NULL,*new,*head;
    head = new_node(rand() % 100);

    for (int i = 0; i < MAX; ++i) {
        new = new_node(rand() % 100);
        if (t == NULL){
            head = t = new;
        }else{
            t->next = new;
            t = t->next;
        }
    }

    return head;
}