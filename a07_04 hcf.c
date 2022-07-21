#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, d=1, hcf;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a, &b);

    for(d=1; d<=b; d++)
    {
        if(a%d==0 && b%d==0)
            hcf=d;
        else
        continue;
    }

    printf("HCF of %d and %d is %d.",a,b,hcf);
    getch();
    return 0;
}
