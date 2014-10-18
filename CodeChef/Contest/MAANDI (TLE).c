#include<stdio.h>
main()
{
    int t, flag, a;
    long int n, i, x, count;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld", &n);
        i=4;
        count=0;
        while(i<=n)
        {
            x=i;
            flag=0;
            while(x!=0)
            {
                a = x%10;
                if(a==4 || a==7)
                {
                    flag = 1;
                    break;
                }
                else    x /= 10;
            }
            if(flag==1 && n%i==0)   count++;
            i++;
        }
        printf("%ld\n", count);
    }
    return 0;
}
