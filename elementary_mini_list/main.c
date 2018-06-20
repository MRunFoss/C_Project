//
// Created by mrun on 2018/6/6.
//

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    link *t, *tmp, *head;
    int min;

    t = new_link();
    head = t;
    min = t->item;
    t = t->next;
    while (t != NULL) {//遍历取得最小的元素
        if (t->item <  min) {
            min = t->item;
        }
        t = t->next;
    }
    t = head;
    print_list(t);
    if (t->item != min){
        while (t->next != NULL){
            if (t->next->item == min){
                tmp = t->next;
                if (tmp != NULL){
                    t->next = tmp->next;
                }else{
                    t->next = NULL;
                }
                break;
            }
            t = t->next;
        }
    }
    tmp->next = head;
    head = tmp;
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

link * new_link()
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
