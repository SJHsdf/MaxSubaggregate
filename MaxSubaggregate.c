#include<stdio.h>
int de;//最终结果
int dq;//暂存结果
void main()
{
	int cun;//输入数据
	char x;//结束标识符
	dq = 0;
	de = 0;
	while (1)
	{
		scanf_s("%d", &cun);
		scanf_s("%c", &x);
		dq += cun;
		if (dq > 0 && dq > de)
			de = dq;
		else if (dq < 0)
			dq = 0;
		if (x == '*')
			break;
	}
	printf("\n%d", de);//输出结果
}
