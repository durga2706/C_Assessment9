#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
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
    if(i == 4 && a[0] == a[3])
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}
