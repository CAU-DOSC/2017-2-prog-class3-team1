#include "list.h"

node *tail;

LINK createNode(int n)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(node));
	cur->value = n;
	cur->next = NULL;

	return cur;
}

LINK append(LINK head, LINK cur)
{
	LINK nextnode = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}
	while (nextnode->next != NULL)
		nextnode = nextnode->next;
	nextnode->next = cur;

	return head;
}

int The_number_of_node(LINK head)
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


void Print_middle(LINK head)
{
	node *cur=head;
	int count = The_number_of_node(head);
	if (count % 2)
	{
		count /= 2;
		for (int i = 0; i < count; i++)
		{
			cur = cur->next;
		}
		printf("print middle:%d\n", cur->value);
	}              
	else
	{
		count = count / 2 - 1;
		for (int i = 0; i < count; i++)
		{
			cur = cur->next;
		}
		printf("print middle:%d %d\n", cur->value, cur->next->value);
	}

}
void Print_all(LINK head)
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

void Print_rev(LINK head)
{
    int count = The_number_of_node(head);
    node *ptr = head;
    
    printf("Print revers oder: ");
    
    for (int j = 1; j<=count; j++)
    {
        for(int i=0; i<(count-j); i++)
        {
            ptr = ptr->next;
        }
        printf("%d ", ptr->value);
        ptr = head;
    }
    
    printf("\n");
}


void Delete_odd_node(struct node* head, int index)
 {
	struct node *before;
	struct node *now;
	int i = 0;

	before = now = head;
	for (i = 0; i < index-1; i++) {
		before = now;
		now = now->next;
		if (i%2 == 0) {
			before->next = now->next;
			free(now);
			now = before->next;
			i++;
		}
	}
}
