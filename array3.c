#include<stdio.h>
main()
{
	int i,n,sum=0,average;
	int a[100];
	printf("how many value enter in array :");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum= sum+ a[i];
		average=sum/n;
	}
	printf("sum of array =%d\n",sum);
	printf("average of array =%d",average);
}
