#include<stdio.h>
int main()
{
	int i,r,j,a;
        scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		r= rand() % 80;
	for(j=0;j<r;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
