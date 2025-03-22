#include<stdio.h>

int main()
{
	int k = 0;
	for (int i = 0;k == 0;i += 1,k +=1)
	{
		printf("%d\n", k++);//优先打印k再++
		printf("%d\n", ++k);//优先执行++再打印k
		printf("%d\n", k);
	}
	printf("%d\n", k);//先执行循环递进再判断是否循环结束
	return 0;
}