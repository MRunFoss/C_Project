#include <stdio.h>
#include "list.h"
#include <stdlib.h>

int main(void) {
    link* t,*u;
    t = new_link();
    print_list(t);
    u  = copy(t);
    print_list(u);
}

link* copy(link* t){
    link *new,*u=NULL,*head;
    while (t != NULL){
        if ( u == NULL){
            u = new_node(t->item);
            head = u;
        }else{
            new = new_node(t->item);
            u->next = new;
            u = new;
        }
        t = t->next;
    }
    return head;
}