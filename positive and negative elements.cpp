#include<stdio.h>
int main()
{
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
        int c[n];int k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
            c[k]=a[i];
            k++;
            }
        }
        int d[n];int g=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                d[g]=a[i];
                g++;
            }
        }int h=0,m=0;
        while(h<g||m<k){if(h<g)printf("%d ",d[h]); if(m<k)printf("%d ",c[m]);h++;;m++;}
        printf("\n");
    }return 0;
}
