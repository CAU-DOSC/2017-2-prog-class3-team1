#include "list.h"

int main()
{
    int num = 0;
    
    while (scanf_s("%d", &num, sizeof(int)) != EOF)
    {
        Makenode(num);
    }
    
    printf("%d\n", The_number_of_node());
    
    Printmidle();
    Printall();
    Printrev();
    Deleteoddnode();
    Printall();
    
    return 0;
}
