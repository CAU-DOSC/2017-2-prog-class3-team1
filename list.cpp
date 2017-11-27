#include "list.hpp"

node *head;
node *tail;

void Makenode(int num)
{
    node *newnode = (node*)malloc(sizeof(node));
    
    newnode->value = num;
    newnode->next = NULL;
    //newnode->before = NULL;
    
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    
    else
    {
        //newnode->before = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

int The_number_of_node()
{
    node *countptr = head;
    int count=0;
    
    while (countptr != NULL)
    {
        count++;
        countptr = countptr->next;
    }
    return count;
}

void Printmidle()
{
    node *ptr = NULL;
    
    int index = The_number_of_node() / 2;
    if (The_number_of_node() % 2 == 1)
    {
        ptr = head;
        index += 1;
        for (int i = 1; i < index; i++)
            ptr = ptr->next;
        
        printf("%d\n", ptr->value);
    }
    else
    {
        ptr = head;
        for (int i = 1; i < index; i++)
            ptr = ptr->next;
        printf("%d, %d\n", ptr->value, ptr->next->value);
    }
}

void Printall()
{
    node *ptr = NULL;
    ptr = head;
    
    while (ptr != NULL)
    {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

void Printrev()
{
    node *ptr = head;
    
    for (int i = The_number_of_node(); i>0; i--)
    {
        for(int j=i; j>1; j--)
        {
            ptr = ptr->next;
        }
        printf("%d ", ptr->value);
        ptr = head;
    }
    
    printf("\n");
}


void Deleteoddnode()
{
    node *ptr = head;
    node *ptrtemp = NULL;
    
    int i = 1;
    
    while (ptr->next != NULL)
    {
        if (i == 1)
        {
            ptr = ptr->next;
            head = ptr;
        }
        else
        {
            if (i % 2 == 1)
            {
                ptrtemp->next = ptr->next;
                ptr = ptr->next;
            }
            else
            {
                ptrtemp = ptr;
                ptr = ptr->next;
            }
        }
        i++;
    }
    
    if (i%2 ==1)
    {
        ptrtemp->next = NULL;
        tail = ptr;
        
    }
}
