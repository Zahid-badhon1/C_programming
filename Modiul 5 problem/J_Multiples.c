#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A % B == 0)
    {
        printf("Multipls");
    }
    else if (B % A == 0)
    {
        printf("Multipls");
    }
    else
    {
        printf("No Multipls");
    }

    return 0;
}