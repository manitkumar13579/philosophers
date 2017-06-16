#include <stdio.h>
#include <string.h>

int xstrsearch ( char *, char * ) ;
int read_line(char *s1, int maxlen);

int main( )
{
  char s1[100],s2[10];
  int pos;
    read_line(s2,10);
    read_line(s1,100);
    

    /* search if s2 is present in s1 */

    pos = xstrsearch ( s1, s2 ) ;
    printf ( "\n %d\n", pos ) ;

    return 0;
}

/* searches for the given pattern s2 into the string s1 */
int xstrsearch ( char * s1, char * s2 )
{
    int i, j, k, l1, l2 ;
    l1 = strlen ( s1 ) ;
    l2 = strlen ( s2 ) ;

    for ( i = 0 ; i <= l1 - l2 ; i++ )
    {
        j = 0 ;
        k = i ;
        while ( ( s1[k] == s2[j] ) && ( j < l2 ) )
        {

            k++ ;
            j++ ;
        }
        if ( j == l2 )
            return i ;
    }
    return -1 ;
}





int read_line(char *s, int maxlen)
{
int ch=0,cnt=0;
while((maxlen>cnt) && (ch=getchar())!='\n')
{
s[cnt++]=ch;
}
s[cnt]=0;
return cnt;
}
