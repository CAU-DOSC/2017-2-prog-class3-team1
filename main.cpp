#include "list.h"

int main()
{
	int num = 0;
	LINK head = NULL;
	LINK cur = NULL;

    while (scanf_s("%d", &num, sizeof(int)) != EOF)
    {
		cur = createNode(num);
		head = append(head, cur);
    }
    
    printf("%d\n", The_number_of_node(head));
    
	Print_middle(head);
	Print_all(head);
	Print_rev(head);
	Delete_odd_node(head, The_number_of_node(head));
	Print_all(head);
    
    return 0;
}
