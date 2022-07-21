#include<stdio.h>
#include<conio.h>

int main()
{
    int a=2, i;

    for(a=2; a<=100; a++)
    {
        for(i=2; i<a; i++)
        {
            if(a%i);
            else
                break;
        }
        if(i==a)
            printf("%d\n",a);
    }

    getch();
    return 0;
}
