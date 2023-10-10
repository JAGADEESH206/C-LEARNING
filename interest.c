#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r;
	float interest;
	printf("enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	interest=(p*t*r)/100;
	printf("%f",interest);
}

