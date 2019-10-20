#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char A[15],S[15];
	int i,j;
	printf("Enter code ");
		gets(A);
	j=2;						//to encrypt add 2
	for(i=0;A[i]!='\0';i++)		//loop works till end of string i.e '\0'
		{
			S[i]=A[i]+j;		//increments every character by 2 (eg. A becomes C)
			if(isalpha(S[i]))	//checking if it is alphabet 
				S[i]=A[i]+j;
			else
				S[i]=A[i]-(26-j);
		}
	printf("Encrypted code %s",S);
		for(i=0;A[i]!='\0';i++)
			{
				A[i]=S[i]-j;
				if(isalpha(A[i]))
					A[i]=S[i]-j;
				else
					A[i]=S[i]+(26-j);
			}
		printf("\nDecrypted code %s",A);
			return 0;
}
