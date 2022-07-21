#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, i, x, y=0, z;

    for(a=0; a<=1000; a++)
    {
        b=0;
        for(x=a; x; b++)
            x/=10;

        for(c=a; c; c/=10)
        {
            x=c%10;
            for(z=1, i=1; z<=b; z++)
            {
                    i*=x;
            }
            y+=i;
        }
        if(y==a)
            printf("%d ",y);
        y=0;
    }

    getch();
    return 0;
}
