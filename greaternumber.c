#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    printf("enter three different numbers");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
           {
               printf("The greatest number is:  %.2f",a);
           }
    else if(b>a&&b>c)
           {
               printf("The greatest number is:  %.2f",b);
           }
    else
            printf("The greatest number is:  %.2f",c);
    getch();

}
