#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
        printf("%d", sum);
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}