#include "list.h"

int main()
{
    int num = 0;
    
    while (scanf_s("%d", &num, sizeof(int)) != EOF)
    {
        Make_node(num);
    }
    
    printf("%d\n", The_number_of_node());
    
    Print_middle();
    Print_all();
    Print_rev();
    Delete_odd_node();
    Print_all();
    
    return 0;
}
