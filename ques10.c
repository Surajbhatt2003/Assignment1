#include <stdio.h>

int main()
{    int day,month,year;
    printf("Enter date in :\"DD/MM/YYYY\" in this format\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf(" \"Day-%d ,Month-%d , Year-%d\"",day,month,year);
  
    return 0;
}