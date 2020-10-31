#include <stdio.h>
void quicksort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)i++;
            while(a[j]>a[pivot])j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[j];
        a[j]=a[pivot];
        a[pivot]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
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
	        scanf("%d",&a[i]);
	    }
	    quicksort(a,0,n-1);
	    int sum1=0,sum2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            sum1=(sum1*10)+a[i];
	        }
	        else 
	        {
	            sum2=(sum2*10)+a[i];
	        }
	    }
	    int h;
	    h=sum1+sum2;
	    printf("%d\n",h);
	}
	return 0;
}
