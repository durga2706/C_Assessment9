#include <stdio.h>
int main()
{
    int a, b, c, d, e, big;
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    big = a;
    if (b>big)
        big = b;
    if (c>big)
        big=c;
    if (d>big)
        big=d;
    if (e>big)
        big=e;
    printf("%d",big);
    return 0;
}
