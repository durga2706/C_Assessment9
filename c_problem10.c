#include <stdio.h>
int main()
{
    int a[5], b[5];
    int i, j, count, k = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        count = 0;
        if(a[i] <= 1)
        {
            b[k] = a[i];
            k++;
        }
        else
        {
            for(j = 1;j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    count++;
                }
            }
            if(count != 2)
            {
                b[k] = a[i];
                k++;
            }
        }
    }
    printf("New array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}
