//print even  and odd  in array/
#include<stdio.h>
int main()
{
    int a[100],i,size=0;
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&a[i++]));
    printf("even:");
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        printf("%d ",a[i]);
    }
    printf("odd:");
    for(i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        printf("%d ",a[i]);
    }
    return 0;

}