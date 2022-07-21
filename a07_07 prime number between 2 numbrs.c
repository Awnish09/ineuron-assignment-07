#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, i;
    printf("Enter 2 numbers.\n");
    scanf("%d %d",&a,&b);

    for(a; a<=b; a++)
    {
        for(i=2; i<a; i++)
        {
            if(a%i);
            else
                break;
        }
        if(i==a)
            printf("%d ",a);
    }

    getch();
    return 0;
}
