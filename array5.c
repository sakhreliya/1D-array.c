#include<stdio.h>
main()
{
	int i,n,n1,sum,temp;
	int a[100],b[100],c[200];
	 
	printf("how many value enter in array A:");
	scanf("%d",&n);
	printf("enter A array elements:");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
		temp=i;
	}
	temp=temp+1;
	printf("how many value enter in array B:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("b[%d]= ",i);
		scanf("%d",&b[i]);
		c[temp]=b[i];
		temp++;
	}
	printf("\n merge of array :");
	sum=n+n1;
	for(i=0;i<sum;i++)
	{
		printf("%d\t",c[i]);
	}
}
