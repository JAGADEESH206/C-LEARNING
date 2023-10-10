#include<stdio.h>
#include<math.h>
int main()
{
	float a1,a2,a3,a4,a5,aggregate,percentage;
	printf("enter values");
	scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);
	aggregate=a1+a2+a3+a4+a5;
	percentage=aggregate/100;
	printf("%f\n",aggregate);
	printf("%f\n",percentage);
}
