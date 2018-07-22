//
// Created by mrun on 2018/7/23.
//

#ifndef ELEMENTARY_EXERCISE_3_47_LIST_H
#define ELEMENTARY_EXERCISE_3_47_LIST_H

#endif //ELEMENTARY_EXERCISE_3_47_LIST_H


typedef struct node link;

struct node {
    int item;
    link *next;
};

link* new_node(int);
link* new_link();