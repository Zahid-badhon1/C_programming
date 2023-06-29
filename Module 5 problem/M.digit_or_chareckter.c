#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
        printf("IS DIGIT");
    }
    // else if (a >= 'A' && a <= 'Z')
    // {
    //     printf("ALPHA\nIS CAPITAL");
    // }
    // else (a >= 'a' && a <= 'z')
    // {
    //     printf("ALPHA\nIS SMALL");
    // }
    else
    {
        printf("ALPHA\n");
        if (a > 'a' && a <= 'z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }

    return 0;
}