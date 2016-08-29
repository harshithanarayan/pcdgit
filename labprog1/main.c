#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,x1,x2,disc;
    printf("enter the coefficients\n");
    scanf("%f%f%f",&a,&b,&c);
    /*compute the discriminant*/
    disc=b*b-4*a*c;
     /*find the equal roots*/
if(disc==0)
{
    x1=x2=-b/(2*a);
    printf("the roots are equal\n");
    printf("x1=%f\nx2=%f\n",x1,x2);
return;
}
    /*find the distinct roots*/
if(disc>0)
{
    x1=(-b+sqrt(disc))/(2*a);
    x2=(-b-sqrt(disc))/(2*a);
    printf("the roots are distinct\n");
    printf("x1=%f\nx2=%f\n",x1,x2);
return;
}
    /*find the complex roots*/
    x1=-b/(2*a);
    x2=sqrt(fabs(disc))/(2*a);
    printf("the roots are complex\n");
    printf("the first root=%f+i%f\n",x1,x2);
    printf("the second root=%f-i%f\n",x1,x2);
}
