#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    //struct node *before;
};

typedef node* LINK;

LINK createNode(int n);
LINK append(LINK head, LINK cur);
int The_number_of_node(LINK head);
void Print_middle(LINK head);
void Print_all(LINK head);
void Delete_odd_node(struct node* head, int index);
void Print_rev(LINK head);
