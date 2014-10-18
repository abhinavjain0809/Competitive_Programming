#include<stdio.h>
main()
{
    int a, b, c, x, i=0, count=0, dig[4], k[4];
    scanf("%d%d", &a, &b);
    c = a-b;

    while(c!=0)
    {
        x = c%10;
        c /= 10;
        count++;
        dig[i++] = x;
    }

    for(i=0;i<count;i++)    k[i] = dig[count-i-1];

    for(i=0;i<count;i++)
    {
        if(i!=count-1)
        {
            if(k[i]!=9)
            {
                k[i]++;
                break;
            }
        }
        else    k[0] = 5;
    }

    for(i=0;i<count;i++)    printf("%d", k[i]);
    return 0;
}
