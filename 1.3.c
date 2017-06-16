#include<stdio.h>
int main()
{
	int i,j,k,a;
        scanf("%d",&a);
	for(i=1;i<=a;++i)
	{
		if(i==1 || i==a)
		{
			for(k=1;k<=a;k++)
				printf("*");
		}
		else
		{
		for(j=1;j<=a;j++)
		{
			if(i+j==a+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		}
		printf("\n");
	}
	return 0;
}

