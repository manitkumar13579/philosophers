#include<stdio.h>
#include<string.h>
int word_count(char str[100]);
int main()
{
	int word=0;
	char str[100];
	scanf("%[^\n]",&str);
	word=word_count(str);
	printf("%d\n",word);
	return 0;	
}


int word_count(char str[100])
{
	int i,a=0,len;
        len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]==32)
			a=a+1;
		else
			a=a;
	}
	return a+1;
}
