#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    float avg;
    printf("Enter numbers:\n");
    while(1)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0)
        {
            break;
        }
        i++;
    }
    if(i % 2 != 0)
    {
        printf("%d", a[i / 2]);
    }
    else
    {
        avg = (a[(i / 2) - 1] + a[i / 2]) / 2.0;
        printf("Average of middle two numbers = %.2f", avg);
    }
    return 0;
}
