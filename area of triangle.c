#include<stdio.h>
#include<math.h>
void find_area_trian
int main()
{
	double a,b,c,s,area;
	scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%lf\n",area);
	return  0;
}
