#include <stdio.h>
# define concat(a,b) a##b

int main(void)
{
	printf("%d",concat(12,08));
	return 0;
}


