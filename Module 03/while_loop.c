#include <stdio.h>
int main()
{
    int i;
    i = 1;
    int j = i++;
    int k = ++i;
    printf("%d\n",j);
    printf("%d",k);

    // while (i <= 13)
    // {
    //     printf("%d\n", i);
    //     i = i + 1;
    // }
    return 0;
}