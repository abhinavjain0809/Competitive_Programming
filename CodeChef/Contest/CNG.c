#include<stdio.h>
main()
{
   long long int d1, d2;
   int t;
   long long int ans;

   scanf("%d", &t);

   while(t--)
   {
       scanf("%lld%lld", &d1, &d2);
       ans = (d1*d2)-(d1+d2);
       printf("%lld\n", ans);
   }

   return 0;
}
