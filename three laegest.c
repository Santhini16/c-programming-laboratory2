#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("the number %d is largest among the other two numbers",a);
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
            printf("the number %d is largest among the other two numbers",b);
        }
    }
    else if(c>a)
    {
        if(c>b)
        {
            printf("the number %d is largest among the other two numbers",c);
        }
    }
}
