//1+2+3+............+n
#include<stdio.h>
int main()
{
    int n, i;
    int sum = 0;
 printf("print last num" );
 scanf("%d",&n) ;
 printf("1+2+3+..........+ %d",n);
 for(i=1;i<=n;i++)
{
    sum=sum+i;
}
  printf("=%d",sum)  ;
    return 0;
}
