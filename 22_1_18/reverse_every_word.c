Reverse every word in a string of length N 
constrains: 1<N<100000

input:hello world
output:olleh dlrow


#include<stdio.h>
int main()
{
	int i,j=0,k=0,x;
	char ch[100],c[10][20];
	scanf("%[^\n]s", ch);
	 
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			c[k][j]='\0';
			k++;
			j=0;
		}
		else
		{
			c[k][j]=ch[i];
			j++;
			
		}
	}
	c[k][j]='\0';
	
	for(i=0;i<=k;i++)
	{
		int len = strlen(c[i]);
		for(j=0,x=len-1;j<x;j++,x--)
		{
			char temp = c[i][j];
			c[i][j] = c[i][x];
			c[i][x] = temp;
		}
		
	}
	for (i = 0;i <= k;i++)
    {
        printf("%s ",c[i]);
    }
}
