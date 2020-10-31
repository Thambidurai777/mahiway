#include<stdio.h>
int main()
{
	
	long long max=0;
	 long long c,n,start,ans;
	
	for(start=2;start<1000000;start++)
	{
	c=1;
	n=start;
	while(n>1)
	{
		if(n%2==0)n=n/2;
		else n=(3*n)+1;
		c++;
	}
	if(c>max){
	max=c;
	ans=start;
	}
	}
	printf("%llu",ans);
	return 0;
}
