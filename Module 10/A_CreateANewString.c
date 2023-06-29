#include <stdint.h>
#include <string.h>
int main()
{
    char a[1001];
    char b[1001];
    gets(a);
    gets(b);
    int sta = strlen(a);
    int stb = strlen(b);
    printf("%d %d\n", sta, stb);
    printf("%s %s", a, b);

    return 0;
}