#include <stdio.h>
int main()
{
    int no=0,l1=0,l2=0,ll=0,ul=0;
    scanf("%d%d%d",&no,&l1,&l2);
    ll=l1<l2?:l1:l2;
    ul=l1>l2?:l1:l2;
    if(no>ll&&no<ul)
    printf("middle");
 else if(no<ll)
  printf("left");
else
 printf("right");
return 0;
}