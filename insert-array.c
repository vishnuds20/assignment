#include<stdio.h>
#include<conio.h>
void main()
	{
		int array[100],i,j,k,n,position,element;
		printf("enter the number of elements in array \n");
		scanf("%d",&n);
		printf("enter the elements of the array \n");
		for(i=0;i<n;i++)
			{
				scanf("%d",&array[i]);
			}
		
		printf("\n enter the possion of the element to be insert \n");
		scanf("%d",&position);
		printf("enter the new element to be insert \n");
		scanf("%d",&element);
		for(j=(n-1);j>=(position-1);j--)
			{
				array[(j+1)]=array[j];
			}
		array[(position-1)]=element;
		printf("the elements in new array after insertion of new element \n");
		for(k=0;k<=n;k++)
			{
				printf("%d \n",array[k]);
			}
	}
