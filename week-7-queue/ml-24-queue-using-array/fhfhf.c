#include<stdio.h>
int main()
{
                int n,i,result=1;
                printf("type n=");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                {
                                result =result *i*i;
                }
                printf("result =%d",result);
}
