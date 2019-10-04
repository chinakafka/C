#include<stdio.h>
int main(void)
{
	int c='0';
	c=getchar();
	while(c!=EOF)
	{
		putchar(c);
		printf("\n");
		c=getchar();
	}
	return 0;
}

