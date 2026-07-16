#include <stdio.h>
int main()
{
    int a[10];
    int i;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 9; i > 0; i--)
    {
        if(a[i] >= 10)
        {
            a[i - 1] = a[i - 1] + (a[i] / 10);
            a[i] = a[i] % 10;
        }
    }
    printf("After adjusting carry:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
