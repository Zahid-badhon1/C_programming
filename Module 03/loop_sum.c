#include <stdio.h>
int main()
{
    int sum = 0;
    int i;
    for (i = 0; i <= 5; i = i + 1)
    {
        sum=sum+i;
        
    }
    printf("%d\n", sum);

    return 0;
}