#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }int sum=0,sum1=0;
	    for(int i=0;i<n/2;i++)
	    {
	        sum=sum+a[i];
	    }
	    for(int i=n/2;i<n;i++)
	    {
	        sum1=sum1+a[i];
	    }
	    int d;
	    d=sum*sum1;
	    printf("%d\n",d);
	}
	return 0;
}
