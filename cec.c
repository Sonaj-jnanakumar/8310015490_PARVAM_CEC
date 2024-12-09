#include<stdio.h>

int main()
{
    int x=2,y=1,counter=1;
    scanf("%d",&y);
    while(counter<=y)
    {
        printf("%d, ",x);
        x=x*2;
        counter=counter+1;
    }
  return 0;
}