#include<stdio.h>
#include<conio.h>

int main()
{
    int a=-1, b=1, c, n, i;
    printf("Enter a number you want to check if its in the Fibonacci series or not.\n");
    scanf("%d",&n);
    for(i=1; i<=n+3 ; i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
            break;
    }
    if(n==c)
        printf("The given number is there in the Fibonacci series.");
    else
        printf("The given number is not there in the Fibonacci series");

    getch();
    return 0;
}
