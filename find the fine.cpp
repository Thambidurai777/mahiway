#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int k;
	    scanf("%d",&k);
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    int sum=0;
	    if(k%2==0)
	    {
	        for(int i=0;i<n;i++)
	        {    if(a[i]%2!=0)
	            sum=sum+b[i];
	        }
	        printf("%d\n",sum);
	    }
	    else 
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]%2==0)
	            sum=sum+b[i];
	        }
	        printf("%d\n",sum);
	    }
	}
	return 0;
}


