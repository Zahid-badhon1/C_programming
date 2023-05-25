#include <stdio.h>
int main()
{
    int rahim, karim;
    float f;
    char d;
    char p;
    scanf("%d%c %f %c", &rahim, &p, &f, &d);
    printf("%d%% %0.1f %c", rahim, p, f, d);
    return 0;
}