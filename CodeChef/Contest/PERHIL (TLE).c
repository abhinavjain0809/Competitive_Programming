#include<stdio.h>
main()
{
    int t, h, b, p, flag;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &h);
        flag=0;
        b=1;
        while(b<h)
        {
            p=1;
            while(p<h)
            {
                if(p*p + b*b == h*h)
                {
                    printf("PERFECT\n");
                    flag=1;
                    break;
                }
                p++;
            }
            b++;
            if(flag==1)     break;
        }
        if(flag==0)     printf("IMPERFECT\n");
    }
    return 0;
}
