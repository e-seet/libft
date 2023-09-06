#include <stdio.h> 
#include <string.h> 
#include <assert.h> 


char *findit(char *str, char *find){
	printf("str:%s \n",str);

	if (*find == '\0')
	{
		return str ;
	}

  if (*str == '\0') {
        return NULL;
    }

	if ( *str == *find && findit(str + 1, find + 1) == str + 1)
	{
		return str;
	}
	else
	{
		return findit(str+1, find);
	}

}

int main(){
	char str[] = "this is a test";
	// char find[] = "his";
	// char *str2 = str;
	// char find[] = "t";
	char find[] = "test";
	char *x;
	x = findit(str,find);
	printf("answer:%s\n", x);
	// x = findit(str2,find);
	// printf("answer2:%s\n", str2);

	return 0;
}