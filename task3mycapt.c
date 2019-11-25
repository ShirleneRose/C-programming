#include<stdio.h>
int main()
{
	int n,i,sum=0,avg,marks[7];
	printf("Enter the number of subjects you wish to calculate the sum and average for");
	scanf("%d",&n);
	printf("Enter the subject marks");
	for(i=0;i<n;i++)
	{
	scanf("%d",&marks[i]);
    }   
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	printf("The sum of your marks is:%d\n",sum);
	avg=sum/n;
	printf("The average of your marks is :%d",avg);
	
}
