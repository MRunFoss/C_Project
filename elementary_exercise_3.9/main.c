#include <stdio.h>
#include "list.h"

int main(void) {
    link * t;

    t = new_link();
    print_list(t);

    if
}

int func(link* t){
    if (t->item % 2){
        return 0;
    }else{
        return 1;
    }
}


link* remove_item(int (*f)(link*),link* t){
    link* head;

    while (t != NULL){
        if (!(f(head))){
            head = t->next;
        } else if (!(f(t))){
            delete_link(head,t);
        }
        t = t->next;
    }
    return head;
}