//
// Created by mrun on 2018/6/18.
//

#ifndef ELEMENTARY_MINI_LIST_MAIN_H
#define ELEMENTARY_MINI_LIST_MAIN_H

#endif //ELEMENTARY_MINI_LIST_MAIN_H

typedef struct node link;

struct node
{
    int item;
    link *next;
};

link * new_node(int);
link * new_link(void);
void print_list(link*);
