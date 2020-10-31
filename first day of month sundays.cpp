#include<stdio.h>
int main()
{
	int sun=0;
	int year;
	int month;
	int dayofweek=1;
	int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<12;i++)
	{
		dayofweek+=(monthdays[i]%7);
		if(dayofweek>7)
		dayofweek%=7;
	}
	for(year=1901;year<2001;year++)
	{
		for(int i=0;i<12;i++)
		{
			dayofweek+=(monthdays[i]%7);
			if(dayofweek>7)dayofweek%=7;
			else if(dayofweek==7)sun++;
		}
	}
	printf("sundays :%d",sun);
	return 0;
}
