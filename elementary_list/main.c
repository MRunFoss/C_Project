//
// Created by mrun on 2018/6/6.
//

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    link *t, *tmp, *head;
    int max;

    t = new_list();
    head = t;
    max = t->item;
    t = t->next;
    while (t != NULL) {//遍历取得最大的元素
        if (t->item > max) {
            max = t->item;
        }
        t = t->next;
    }
    t = head;
    print_list(t);
    if (max != last_item(t)) {
        while (t->next != NULL) {
            if (t->next->item == max) {
                tmp = t->next;
                t->next = t->next->next;
                tmp->next = NULL;
            }
            t = t->next;
        }
        t->next = tmp;
    }
    print_list(head);
    return 0;
}

void print_list(link *t)
{
    while (t != NULL)
    {
        printf("%d ", t->item);
        t = t->next;
    }
    printf("\n");
}

int last_item(link *t)
{
    while (t->next != NULL){
        t = t->next;
    }
    return t->item;
}


link * new_list()
{
    srand(time(NULL));
    link *head,*new,*t = NULL;
    for (int i = 0; i < 5; ++i) {
        new = new_node(rand()%100);
        if (t == NULL){
            t = new;
            head = new;
        }else{
            t->next = new;
            t = t->next;
        }
    }
    return head;
}

link* new_node(int n)
{
    link *t = NULL;
    t = malloc(sizeof(link));
    if(t != NULL){
        t->item = n;
        t->next = NULL;
    }
    return t;
}
