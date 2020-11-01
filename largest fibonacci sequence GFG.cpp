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
	    }int dp[1000];
	    int i,j;
	    for(j=0;j<n;j++)
	    {
	            for(i=2;i<1000;i++)
	            { dp[0]=0;dp[1]=1;
	                dp[i]=dp[i-1]+dp[i-2];
	                if(dp[i]>=a[j])break;
	                
	            }
	        if(dp[i]==a[j])
	        {
	            printf("%d ",a[j]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}
