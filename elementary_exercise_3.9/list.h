//
// Created by wujc on 2018/6/26.
//

#ifndef ELEMENTARY_EXERCISE_3_9_LIST_H
#define ELEMENTARY_EXERCISE_3_9_LIST_H

#endif //ELEMENTARY_EXERCISE_3_9_LIST_H

typedef struct node link;

struct node{
    int item;
    link * next;
};

link* new_node(int);
link* new_link();
//link* remove_item(void*,link*);

void print_list(link*);
void delete_link(link*,link*);
int func(link*);
