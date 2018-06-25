#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

# define LIST_MAX 5
#define Right 1 // 指定第一位
#define Left 3 // 指定第二位

int main() {
    link *t,*r,*l;

    t = new_link();
    print_list(t);
    r = getNode(t,Right);
    l = getNode(t,Left);
    exchange(r,l);
    print_list(t);
}

link * new_link(){
    srand((unsigned)time(NULL));
    link* t = NULL,*new,*head;
    head = new_node(rand()%100);
    for (int i = 0; i < LIST_MAX; ++i) {
        new = new_node(rand()%100);
        if (t == NULL){
            t = head = new;
        }else{
            t->next = new;
            t = t->next;
        }
    }
    return head;
}

link* getNode(link* t, unsigned int n){
    unsigned int i = 0;
    while ( i != n && t != NULL) {
        t = t->next;
        i++;
    }
    return t;
}


link * new_node(int n){
    link * t;
    t = malloc(sizeof(link));
    if (t != NULL){
        t->item = n;
        t->next = NULL;
    }
    return t;
}

void print_list(link* t){
    while (t != NULL){
        printf("%d ",t->item);
        t = t->next;
    }
    printf("\n");
}

void exchange(link*t,link*u){
    int temp = t->item;

    t->item = u->item;
    u->item = temp;
}