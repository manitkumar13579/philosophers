#include<stdio.h>
void hb(int b);
int main()
{
	int i,j,r,a;
	scanf("%d",&a);
	for(j=1;j<=a+1;j++)
	{
		if(j==1)
			hb(80);
		else
		{
		printf("\n| %d|",j-2);
		r= rand() % 80;
		for(i=0;i<=r;i++)
			printf("=");
			printf("(%d)",r);
		for(i=r+1;i<71;i++)
			printf(" ");
			if(r/10==0)
			printf(" |");
			else
				printf("|");
		}
	}
	printf("\n");
	hb(80);
	printf("\n");
	return 0;
}
void hb(int b)
{
	int i;
	for(i=1;i<=b;i++)
	{
		if(i==1 || i==b)
			printf("+");
		else
			printf("-");
	}
}

