#include <stdio.h>

int main(void) {
	int a,count=0;
	printf("enter the number");
	scanf("%d",&a);
		while(a!=0)
	{
		count++;
		a=a/10;
		}
	
	return 0;
}
