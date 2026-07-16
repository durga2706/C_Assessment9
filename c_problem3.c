#include <stdio.h>
int main()
{
    int a, b, c, d, e, small;
    printf("Enter 5 numbers: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    small=a;
    if (b<small)
        small = b;
    if (c<small)
        small = c;
    if (d<small)
        small = d;
    if (e<small)
        small = e;
    printf("%d", small);
    return 0;
}
