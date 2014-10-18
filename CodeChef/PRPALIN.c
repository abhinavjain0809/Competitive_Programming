#include<stdio.h>
main()
{
    long int n, i, j;
    int k, a, m, flag;

    scanf("%ld", &n);
    i=n;
    while(1)
    {
        flag=1;
        for(j=2;j<i-1;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag==0)
        {
            i++;
            continue;
        }

        k=0;
        m=i;
        while(m!=0)
        {
            a = m%10;
            m /= 10;
            k=k*10+a;
        }

        if(i==k)
        {
            printf("%d", i);
            break;
        }
        else    i++;

    }
    return 0;
}
