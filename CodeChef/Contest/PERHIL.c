#include<stdio.h>
main()
{
    int t, h, i, temp, flag;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &h);
        i=1;
        while(i<h)
        {
            flag=0;
            temp = 2*i*(i+1) + 1;
            if(temp==h)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==1)     printf("PERFECT\n");
        else            printf("IMPERFECT\n");
    }
    return 0;
}
