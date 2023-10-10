#include<stdio.h>
#include<math.h>
float temperature(float a)
{
	float c=((a-32)/9)*5;
	return c;
}
 
int main()
{
	float c,f;
	printf("enter values");
	scanf("%f",&f);
	c=temperature(f);
	printf("%f",c);
	return  0;
}
