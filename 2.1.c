#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20];
	int i,len,a,b=0;
	read_line(arr1, 50);
	len=strlen(arr1);
	for(i=0;i<len;i++)                     /*convert all in upper case letter*/
	{
		if(arr1[i]>=97 && arr1[i]<=122)
			arr1[i]=arr1[i]-32;
	}
	for(i=0;i<=len/2;i++)              
           {
              if(arr1[i]==32)
                  b=b+0;
             else if(arr1[i]<65 || arr1[i]>90) 
                {                                                       /*ignore any punchation*/
                     b=b+1 ;        
                     continue;
                }
             else
                {
		   if(arr1[i]==arr1[len-i-1+b])              /*checking plindrome*/
			a=1;
		    else
			a=0;
                 }
                      
	   }


	if(a==0)
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}





int read_line(char *arr1, int maxlen)
{
int ch=0, cnt=0;
while((maxlen>cnt) && (ch=getchar())!='\n') {
arr1[cnt++]=ch;
}
arr1[cnt]=0;
return cnt;
}
