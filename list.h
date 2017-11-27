#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    //struct node *before;
};

void Make_node(int num);
int The_number_of_node();
void Print_middle();
void Print_all();
void Delete_odd_node();
void Print_rev();
