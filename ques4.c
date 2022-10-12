#include <stdio.h>
#define  pie 3.14
int main()
{    float radius,area;
    printf("Enter radius of a circle in cm\n");
    scanf("%f",&radius);
      area = pie*(radius*radius); 
     printf("\"Area of circle is %.2lfcm having the radius %.2lfcm\".",area,radius);
     
    return 0;
}