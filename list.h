#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    //struct node *before;
};

void Makenode(int num);
int The_number_of_node();
void Printmidle();
void Printall();
void Deleteoddnode();
void Printrev();
