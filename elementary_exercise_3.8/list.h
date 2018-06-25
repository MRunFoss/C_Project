//
// Created by wujc on 2018/6/25.
//
#

#ifndef ELEMENTARY_EXERCISE_3_8_LIST_H
#define ELEMENTARY_EXERCISE_3_8_LIST_H

#endif //ELEMENTARY_EXERCISE_3_8_LIST_H

typedef struct node link;

struct node{
    int item;
    link * next;
};

extern link* new_node(int);
extern link* new_link();

extern void print_list(link*);
extern link* copy(link*);