//
// Created by wujc on 2018/6/25.
//

#ifndef ELEMENTARY_EXERCISE_3_7_MAIN_H
#define ELEMENTARY_EXERCISE_3_7_MAIN_H

#endif //ELEMENTARY_EXERCISE_3_7_MAIN_H

typedef struct node link;

struct node{
    int item;
    link * next;
};

link* new_node(int);
link* new_link();
link* getNode(link*, unsigned int);

void print_list(link*);
void exchange(link*,link*);