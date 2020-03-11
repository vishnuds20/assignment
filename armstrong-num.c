#include<stdio.h>
#include<conio.h>
void main()
	{
		int n,i,k,count=0,r,sum;
		printf("enter the N value \n");
		scanf("%d",&n);
		printf("the armstrong numbers less than %d \n",n);
		for(i=1;i<=n;i++)
			{
				sum=0;
				k=i;
				while(k!=0)
					{
						r=k%10;
						sum=sum+r*r*r;
						k=k/10;
					}
				if(i==sum)
					{
						count++;
						printf("%d \t",sum);
					}
			}
	}