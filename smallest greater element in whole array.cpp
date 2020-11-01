#include <stdio.h>
int don(int a[],int n)
{
    int diff,c;
    for(int i=0;i<n;i++)
    {
        diff=9999,c=-1;
        for(int j=0;j<n;j++)
        {
         if(a[i]<a[j]&&a[j]-a[i]<diff)
         {
         diff=a[j]-a[i];   
         c=j;
         }   
        }
        if(c==-1)printf("_ ");
        else printf("%d ",a[c]);
    }
}
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
	        scanf("%d ",&a[i]);
	    }
	    
	    don(a,n);
	    printf("\n");
	}
	
	return 0;
}
