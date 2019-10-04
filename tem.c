#include<stdio.h>
/*
*这是一个将摄氏温度转换为华氏温度的程序
*/
int main(void)
{
	int fahr=0;
	int celsius=0;
	int lower =0;
	int upper=300;
	int step=20;

	fahr=lower;

	while(fahr<=upper)
	{
		celsius=5*(fahr-32)/9;
		printf("%3d\t%6d\n",fahr,celsius);
		fahr=fahr+step;
	}
}
