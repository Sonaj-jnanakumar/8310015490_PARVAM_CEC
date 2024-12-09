#include<stdio.h>
int main()
{
    int a,n,sum=0;
    scanf("%d ",&n);
    for(a=0;a<=n;a++)
    sum+=a;
    printf("the summation of first%d number is %d\n",n,sum);
    return 0;
}