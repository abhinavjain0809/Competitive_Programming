#include<stdio.h>
main()
{
    char str[101], j;
    int i, t, freq;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", str);
        i=0;
        while(str[i]!='\0')
        {
        freq=1;
        j=str[i];
        while(j==str[i+1] && str[i+1]!='#')
        {
            freq++;
            i++;
        }
        switch(j-48)
        {
            case 0:
            printf(" ");
            break;

            case 2:
            if(freq==1)     printf("A");
            if(freq==2)     printf("B");
            if(freq==3)     printf("C");
            break;

            case 3:
            if(freq==1)     printf("D");
            if(freq==2)     printf("E");
            if(freq==3)     printf("F");
            break;

            case 4:
            if(freq==1)     printf("G");
            if(freq==2)     printf("H");
            if(freq==3)     printf("I");
            break;

            case 5:
            if(freq==1)     printf("J");
            if(freq==2)     printf("K");
            if(freq==3)     printf("L");
            break;

            case 6:
            if(freq==1)     printf("M");
            if(freq==2)     printf("N");
            if(freq==3)     printf("O");
            break;

            case 7:
            if(freq==1)     printf("P");
            if(freq==2)     printf("Q");
            if(freq==3)     printf("R");
            if(freq==4)     printf("S");
            break;

            case 8:
            if(freq==1)     printf("T");
            if(freq==2)     printf("U");
            if(freq==3)     printf("V");
            break;

            case 9:
            if(freq==1)     printf("W");
            if(freq==2)     printf("X");
            if(freq==3)     printf("Y");
            if(freq==4)     printf("Z");
            break;
        }
        i++;
        }
        printf("\n");
    }
    return 0;
}
