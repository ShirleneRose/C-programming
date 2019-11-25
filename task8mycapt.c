#include<stdio.h>
int main()
{
	int i ,n,a,prod;
	printf("Enter the number you wish to view the multiplication for ");
	scanf("%d",&a);
	printf("Enter the range you wish to see the multiplication table for");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		prod=a*i;
		printf("%d*%d = %d\n",a,i,prod);
	}
	
}
