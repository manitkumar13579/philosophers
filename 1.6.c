#include<stdio.h>
void hb(int a);
int main()
{
	int i,j,r,c;
        scanf("%d",&c);
	hb(80);
	for(j=1;j<=c;j++)
	{
		printf("\n|");
		r= rand() % 80;
		for(i=1;i<=r;i++)
			printf("=");
		for(i=r+1;i<79;i++)
			printf(" ");
			printf("|");
	}
	printf("\n");
	hb(80);
	printf("\n");
	return 0;
}
void hb(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(i==1 || i==a)
			printf("+");
		else
			printf("-");
	}
}

