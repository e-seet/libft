#include <stdio.h> 
#include <string.h> 
#include <assert.h> 


char *findit(char *str, char *find){


	if (*find == '\0')
	{
		printf("str:%s | find : %s\n",str, find );
		return find;
	}

	if (*str == *find)
	{
		if (*findit(str+1, find +1) == '\0')
		{
			printf("found\n");
			// printf("%s\n", str-1);
			return str-1;
		}
	}
	else
	{
		if (*str != '\0')
			return findit(str+1, find);
		else
			return NULL;
	}
}

int main(){
	char str[] = "this is a test";
	char find[] = "is";
	// find2 = "t";
	// find3 = "test";
	char *x;
	x = findit(str,find);
	printf("%s\n", x);
}