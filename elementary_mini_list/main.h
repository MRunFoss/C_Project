//
// Created by mrun on 2018/6/18.
//

typedef struct node link;

struct node
{
    int item;
    link *next;
};

link * new_node(int);
link * new_link(void);
void print_list(link*);
