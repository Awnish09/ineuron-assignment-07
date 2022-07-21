#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i;
    printf("Enter a number to find the next prime number.\n");
    scanf("%d",&a);

    b=a+1;
    for(b; ; b++)
    {
        for(i=2; i<b; i++)
        {
            if(b%i);
            else
                break;
        }
        if(i==b)
        {
            printf("The next prime number from %d is %d ",a,b);
            break;
        }
    }

    getch();
    return 0;
}
