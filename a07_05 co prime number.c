#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i=2;
    printf("Enter any two numbers to check whether they are co-prime numbers or not.\n");
    scanf("%d %d",&a,&b);

    while(i<a)
    {
        if(a%i==0 && b%i==0)
        break;
        i++;
    }
    if(i==a && b%a!=0)
        printf("%d and %d are co-prime numbers.",a,b);
    else
        printf("%d and %d are not co-prime numbers.",a,b);

    getch();
    return 0;
}
