#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fac=1,i;
    printf("enter a integer:");
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        fac*=i;
    }
        printf("%d! is %d",a,fac);
        getch();
}
