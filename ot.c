#include<stdio.h>
int main()
{
    int hours,ot=0,employ=1;
    printf("\nhello here is a program to check overtime pay scale");
    while (employ<=10)
    {
        printf("\n enter the no. of hours employ no. %d has worked ",employ);
        scanf("%d",&hours);
        if (hours>40)
        {
            ot+=(hours-40);
            printf("\n employ count= %d worked for overtime= %d hours", employ ,hours);
            printf("\n over time pay is rs \n %d",12*(hours-40));

        }
        else
        {
            printf(" By employ %d no. of hours worked is %d which is less then 40 hours so there is no overtime pay\n",employ,hours);
        }
        
       employ++; 
    }
    printf("\n \n \t total overtime pay is %d",(ot*12));
    return 0;
    }