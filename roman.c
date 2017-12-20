#include<stdio.h>
#include<string.h>
void main()
{
char roman[100];
printf("Enter the roman");
scanf("%s",roman);

	int num[100];
	int len;
	len = strlen(roman);

		for( int i=0; i<len;i++)
		{
			if( roman[i] == 'I')
			{
			num[i]=1;
			}
			else if( roman[i] == 'V')
			{
			num[i]=5;
			}
			else if(roman[i]== 'X')
			{
			num[i]=10;
			}
			else if(roman[i]== 'L')
			{
			num[i]=50;
			}
			else
			{
			break;
			}
		}
		



int count =0,value,i,j;

	for( int i=0; i<len-1;i++)
	{
		for( int j=i+1; j<len;j++)
		{	
			if(count == 0)
			{
				if(num[i] < num[j])
				{

				value=num[j]-num[i];
				count ++;
				}
				else
				{

				value=num[j]+num[i];
				count++;
				}
			}
		}
	}

for( int i=count; i<(len-1);i++)
   {
		
	for( int j=count+1; j<len;j++)
	{
		if(num[i] < num[j])
		{
		value = value - num[j];
		count++;
		}
	
		else
		{
		value = value + num[j];
		}
	}
   }
	printf("%d",value);

}










