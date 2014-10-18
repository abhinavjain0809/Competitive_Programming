#include<stdio.h>
#include<math.h>

main()
{
    int   t,  a,  b,  num,  i,  prime;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &a, &b);

        if(a==1)    a++;
        for(num=a;num<=b;num++)
        {
            prime=sqrt(num);
            for(i=2;i<=prime;i++)
                if(num%i==0)        break;

            if(i==(prime+1))   printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}
