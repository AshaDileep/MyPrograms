#include <stdio.h>
#include <string.h>

void main()
{
    char str[20],c;
    int base,l,p=1,result=0,i,val,flag=1;
    printf("Enter the number to convert and its base\n");
    scanf("%s%d", str, &base);
    if(base<2 || base >16)
		printf("Invalid base");
    else
    {
		l=strlen(str);
		for(i=l-1; i>=0; i--)
			{
			c=str[i];
			if (c >= '0' && c <= '9')
				val=(int)c - '0';
			else if( c >= 'A' && c <= 'F')
				val = (int)c - 'A' + 10;
			else
				val=-1;
			if (val >= base || val == -1)
			{
				flag=0;
				break;
			}
			result += val * p;
			p*= base;
			}
		if(flag==1)
			printf("The decimal equivalent of the number is %d", result);
		else
			printf("The number is invalid");
    }
   
}

