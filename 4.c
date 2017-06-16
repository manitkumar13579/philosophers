#include<stdio.h>
#include<string.h>
int main()
{
	int i,a=0,len;
	char arr[100];
	read_line(arr,100);
	scanf("%d",&a);
	len=strlen(arr);
	for(i=1;i<=len;i++)
	{
		if(i%(a-1)==0)
		{
			if(arr[i-1]==32)
				printf("\n");
			else
			{
				if(arr[i]==32)
					printf("%c\n",arr[i-1]);
				else
				printf("%c-\n",arr[i-1]);
				
			}
		}
		else
			printf("%c",arr[i-1]);
	}
	printf("\n");
	return 0;
}


int read_line(char *arr, int maxlen)
{
	int ch=0,cnt=0;
	while((maxlen>cnt) && (ch=getchar())!='\n')  {
		arr[cnt++]=ch;
	}
	arr[cnt]=0;
	return cnt;
}
