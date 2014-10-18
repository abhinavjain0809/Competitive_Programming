#include<stdio.h>
long int d1,d2;
int check1(int n)
    {
        int i,j;
        for(i=0;i<=n/d2;i++)
            for(j=n/d1;j>=0;j--)
                if((i*d2+j*d1)==n)return 1;
        return 0;
    }
int check2(int n)
    {
        if(n>d2)
            return(check2(n-d1)||check2(n-d2));
        return(check1(n));
    }
main()
{
    int s=0,t,i;
    long int l;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%ld%ld", &d1,&d2);
    if(d1<d2)
        {
            l=d1;
            d1=d2;
            d2=l;
        }
    for(i=d2-1;;i++)
        {
            if(check2(i)==0)
                {
                    l=i;
                    s=0;
                }
            else
                s++;
            if(s==d1)
                break;
        }
    printf("%ld\n", l);
    }
    return 0;
    }
