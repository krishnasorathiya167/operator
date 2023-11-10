#include<stdio.h>

main()
{
	int a = 18, b = 12, c = 9, d;
	
	d= (a*a)+(2*a*b)+(b*b);
	printf("Ans = %d\n",d);	
	
	d=(a*a)-(2*a*b)+(b*b);
	printf("Ans = %d\n",d);
	
	d=(a*a*a)+((3*a*a)*(a+b))+(b*b*b);
	printf("Ans = %d\n",d);
	
	d=(a*a*a)-(b*b*b)-((3*a*b)*(a+b));
	printf("Ans = %d\n",d);
	
	d=(a*a*a)+(b*b*b)+(c*c*c)+(3*(a+b)*(b+c)*(c+a));
	printf("Ans = %d\n",d);
	
	d= (a*a*a)-(b*b*b)-(c*c*c)-(3*(a+b))+(3*(b+c)+(3*(c+a)));
	printf("Ans = %d\n",d);
	
	d=(a*a)+(b*b)+(c*c)+(2*(a*b)+(b*c)+(c*a));
	printf("Ans = %d",d);
	
	
	
	
	
}