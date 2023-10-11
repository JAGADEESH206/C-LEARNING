#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,area,perimeter;
	printf("enter values");
	scanf("%d%d",&a,&b);
	area=a*b;
	perimeter=2*(a+b);
	printf("%d\n",area);
	printf("%d\n",perimeter);
}
