#include<stdio.h>
int main()
{
	int i,j,s,a;
        scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(s=0;s<=a-i;s++)
			printf(" ");
		for (j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}

