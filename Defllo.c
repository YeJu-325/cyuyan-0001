#include <stdio.h>

int main ()
{
	int timeyear;
	timeyear = 2026;
	if ((timeyear % 4 == 0 && timeyear % 100 != 0) || (timeyear % 400 == 0))
		printf("%d年是闰年\n",timeyear);
	else
		printf("%d年不是闰年\n", timeyear);
	system("pause");
	return 0;
} 