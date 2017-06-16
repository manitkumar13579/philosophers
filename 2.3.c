#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,a=0,len1,len2,c=0;
	char str1[20],str2[20],str3[40];
	read_line(str1,50);
	read_line(str2,50);
	len1=strlen(str1);
	len2=strlen(str2);
	while(i<len1+len2)
	{
		while(j<len1)
		{
			if(str1[j]==32)
				break;
			else
			{
				str3[i+a]=str1[j];
				a=a+1;
			}
				j++;
		} str3[i+a]=32;
		while(k<len2)
		{
			if(str2[k]==32)
				break;
			else
			{
				str3[i+a+c+1]=str2[k];
				c=c+1;
			}
			k++;
		}
		str3[i+a+c+1]=32;
		i=i+a+c+2;
		j++;
		k++;
		a=0;
		c=0;
	}
	printf("%s\n",str3);
    return 0;
}


int read_line(char *arr, int maxlen)
{
	int ch=0,cnt=0;
	while((maxlen>cnt) && (ch=getchar())!='\n'){
		arr[cnt++]=ch;
	}
	arr[cnt]=0;
	return cnt;
}

