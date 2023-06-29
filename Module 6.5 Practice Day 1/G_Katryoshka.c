#include <stdio.h>
int main()
{
    int a, b, c, x = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 2 && c == 1)
    {
        x = x + 1;
        printf("%d", x);
    }
    // else if (a == 2 && b == 1 && c == 1)
    // {
    //     x++;
    // }
    // else if (a == 1 && b == 1 && c == 1)
    // {
    //     x++;
    // }
    // printf("%d", x);
    // else
    // {
    //     printf("%d", x);
    // }
    return 0;
}