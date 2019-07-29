#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[15]="hello %world";
	char str2[]="hello %world";
	char str3[]={'h','e','l','l','o',' ','w','o','r','l','d','!','\0'};
	char str4[12]={'h','e','l','l','o',' ','w','o','r','l','d','\0'};
	const char *str5="hello world";
	char *str6="hello world";
	printf("%s\n\n",str1);
	printf("\n\n%u\n\n",str1);
	printf("\n\n%u\n\n",str2);
	puts(str2);
	printf("\n\n%s\n\n",str3);
	puts(str4);
	printf("\n\n%s\n\n",str5);
	puts(str6);
	int a=strlen(str1);
	printf("\n%d",a);
	strcpy(str3,str4);
	printf("\n\n%s\n\n",str3);

	return 0;
}
