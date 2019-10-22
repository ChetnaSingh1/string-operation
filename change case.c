#include<stdio.h>
#include<string.h>

int main()
{
	char str[66];
	int i;
	printf("Enter string : ");
		gets(str);
	for(i=0;str[i]!='\0';i++)
		{
			if((str[i]>='a')&&(str[i]<='z'))		//changes lower case to upper case
				str[i]=str[i]-32;
			else if((str[i]>='A')&&(str[i]<='Z'))		//changes upper case to lower case
				str[i]=str[i]+32;
		}
	printf("New string is : ");
		for(i=0;str[i]!='\0';i++)
			printf("%c",str[i]);
	return 0;
}
