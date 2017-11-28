#include "list.h"

node *head;
node *tail;

void Make_node(int num)
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

void Print_middle()
{
	node* cur = head;
	int count = The_number_of_node();
	
	if (count % 2)
	{
		count /= 2;
		for (int i = 0; i < count; i++)
		{
			cur = cur->next;
		}
		printf("print middle list:%d\n", cur->value);
	}                  //È¦¼öÀÌ¸é.
	else
	{
		count = count / 2 - 1;
		for (int i = 0; i < count; i++)
		{
			cur = cur->next;
		}
		printf("print middle list:%d %d\n", cur->value, cur->next->value);
	}


}
void Print_all()
{
    node *ptr = NULL;
    ptr = head;
    
    printf("Print all list: ");
    
    while (ptr != NULL)
    {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

void Print_rev()
{
    node *ptr = head;
    
    printf("Print revers oder: ");
    
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


void Delete_odd_node()
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
