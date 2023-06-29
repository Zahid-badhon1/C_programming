#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int tk;
    scanf("%d", &tk);

    if (tk >= 1000)
    {
        printf("I Will buy Panjabi\n");

        if (tk >= 1500)
        {

            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }

    else
    {
        printf("Bad Luck!");
    }

    return 0;
}
