#include<stdio.h>
int main()
{char str [50];
int small,capital,i,digit;
i=capital=small,digit=0;
printf("enter a string=");
gets(str);
while(str[i]!='\0')
{
                if(str[i]>=65 && str[i]<=90)
                                capital++;
                else if (str[i]>=97 && str[i]<=122)
                small++;
                else if (str[i]>=48 && str[i]<=57)
                                digit++;

}
printf("number of capital %d\n",capital);
printf("number of small %d\n",small);
printf("number of digit %d\n",digit);
}
