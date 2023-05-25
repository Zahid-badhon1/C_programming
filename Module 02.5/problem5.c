#include <stdio.h>
int main()
{

    int amount;
    scanf("%d", &amount);
    if (amount >20000)
    {
        printf("Guchi bag\nBelt");
    }
    else if (amount >=10000)
    {
        printf("Guchi bag");
    }
    else if (amount >=5000)
    {
        printf("Leavis bag");
    }
    else 
    {
        printf("Somthing");
    }

    return 0;
}