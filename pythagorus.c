#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
	printf("enter a b values");
    scanf("%f%f",&a,&b);
    c=sqrt((a*a)+(b*b));
    printf("%.2f",c);
}
