#include <stdio.h>
int main()
{
    int a[100];
    int i = 0;
    int sum = 0;
    printf("Enter numbers:\n");
    while(1)
    {
        scanf("%d", &a[i]);
        if(a[i] == 0)
        {
            break;
        }
        sum = sum + a[i];
        i++;
    }
    printf("%d\n",i);
    printf("%d",sum);
    return 0;
}
