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
	    }
	    for(int i=0;i<n;i++)
	    {int sum=1;
	        for(int j=0;j<n;j++)
	        {
	            if(i!=j)
	            {
	                sum=sum*a[j];
	            }
	        }
	        printf("%d ",sum);
	    }
	    printf("\n");
	}
	return 0;
}
