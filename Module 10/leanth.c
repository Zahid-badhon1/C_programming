#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 30, stdin);
    // scanf("%s",a);
    int count = 0;
    // For loop dia kaj kora.
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // loop edia kaj
    // int i = 0;
    // while (a[i] != 0)
    // {
    //     count++;
    //     i++;
    // }

    // function dia kaj
    int st = strlen(a);
    printf("%d", st);
    return 0;
}