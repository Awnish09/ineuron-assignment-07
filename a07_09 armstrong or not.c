#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b=0, c, i, x, y=0,z;
    printf("Enter a number to check whether its Armstrong number or not.\n");
    scanf("%d",&a);

    for(x=a; x; b++)
        x/=10;

    for(c=a; c; c/=10)
    {
        x=c%10;
        for(z=b, i=1; z>=1; z--)
            i*=x;
        y+=i;
    }
    if(y==a)
        printf("%d is an Armstrong number.",a);
    else
        printf("%d is not an Armstrong number.",a);

    getch();
    return 0;
}
