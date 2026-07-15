#include <stdio.h>
int main()
{
    int n[5];
    int sum,avg;
    printf("Enter 5 numbers:\n");
    scanf("%d",&n[0]);
    scanf("%d",&n[1]);
    scanf("%d",&n[2]);
    scanf("%d",&n[3]);
    scanf("%d",&n[4]);
    sum = n[0]+n[1]+n[2]+n[3]+n[4];
    avg = sum/5;
    printf("%d",avg);
    return 0;
}
