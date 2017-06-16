#include<stdio.h>
int main()
{
	int i,c,s,a;
        scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		if(i==a-1)
		{
			for(c=0;c<a;c++)
				printf("* ");
		}
		else
		{
		for(s=1;s<a-i;s++)
		    printf(" ");
		printf("*");
        if(i==0)
            printf(" ");
        else
{
		for(c=1;c<i+i;c++)
			printf(" ");
		printf("*");
}
 printf("\n");
		}
	}
	return 0;
}
