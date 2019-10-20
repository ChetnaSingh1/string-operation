#include<stdio.h>
#include<string.h>

int main()
{
	char S1[50];
	char ch;
	int i,j,k,l;
	printf("Enter string ");
		gets(S1);
	printf("Enter character from where string needs to be separated ");
		scanf("%c",&ch);
	for(i=0;i<strlen(S1);i++)
	{
		if(S1[i]==ch)				//finding the element ch
		{
			k=i;
			printf("String 1 : ");
			  for(l=0;l<i;l++)			//loop for printing all elements before ch
				printf("%c",S1[l]);
			printf("\tString 2 : ");
			  for(j=i+1;j<strlen(S1);j++)  //loop for printing all elements after ch
				printf("%c",S1[j]);
		}
	}
}
