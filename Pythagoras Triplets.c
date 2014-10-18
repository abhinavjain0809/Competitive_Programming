#include <stdio.h>

int main()
{
    int LegOne, LegTwo, Hypotenuse, count=0;

    Hypotenuse = 0;

    while ( Hypotenuse < 1000 )
    {
        LegTwo = 1;

       while ( LegTwo < 1000 )
       {
           LegOne = 1;

           while ( LegOne < 1000 )
           {
               if ( LegOne*LegOne + LegTwo*LegTwo == Hypotenuse*Hypotenuse && LegOne < LegTwo )
              {
                  printf("\nThe sides are %d,%d,%d", LegOne,LegTwo,Hypotenuse);
                  count++;
              }
              LegOne++;
           }
           LegTwo++;
      }
      Hypotenuse++;
  }
  printf("\nCount = %d", count);

printf("\n");
return 0;
}
