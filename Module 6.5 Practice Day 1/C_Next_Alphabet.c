#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a < 'z')
    {
        int next = a + 1;
        printf("%c", next);
    }
    else
        printf("a");
    return 0;
}