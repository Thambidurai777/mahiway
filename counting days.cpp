#include<stdio.h>
int main()
{
	int sum=0,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<12;i++)
	{
		sum=sum+a[i];
	}int fdays=0;
	if(1900%4==0||1900%100==0||1900%400==0)
	{
		fdays=fdays+sum+1;
	}
	else fdays=fdays+sum;
	int g=fdays%7;
	int countingdays=0;
	for(int i=1901;i<2001;i++)
	{
		if(i%4==0||i%400==0||i%100==0)
		{
			countingdays=countingdays+sum+1;
		}
		else countingdays+=sum;
	}
	int yf=countingdays%7;
	int ggf=yf+g;
	int h=countingdays/7;
	h=h/7;
	h=h+ggf/7;
	printf("%d",h);
	return 0;
}
