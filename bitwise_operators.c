// Bitwise operators
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a&b);//and operator
	printf("%d\n",a||b);//or operator
	printf("%d\n",a>>2);//right operator-->decrease value-->a/(2^n)(n is b)
    printf("%d",a<<b);//left operator-->increase value-->(2^n)*a (n is b)
}
