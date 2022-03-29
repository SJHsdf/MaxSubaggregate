#include<stdio.h>
int de;
int dq;
void main()
{
	int cun;
	char x;
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
	printf("\n%d", de);
}