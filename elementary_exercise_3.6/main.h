//
// Created by wujc on 2018/6/20.
//

#ifndef ELEMENTARY_EXERCISE_3_6_MAIN_H
#define ELEMENTARY_EXERCISE_3_6_MAIN_H

#endif //ELEMENTARY_EXERCISE_3_6_MAIN_H

typedef struct node link;

struct node{
    int item;
    link *next;
};

link * new_node(int);
link * new_link();
void print_list(link*);
link * add_last(int,link*);