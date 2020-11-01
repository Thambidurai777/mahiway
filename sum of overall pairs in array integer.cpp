#include <stdio.h>

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,sum=0; scanf("%d",&n);
        int a[n]; for(int i=0; i<n; i++) scanf("%d",&a[i]);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int diff = abs(a[i]-a[j]);
                if(diff>1) sum+=(a[j]-a[i]);
                else sum+=0;
            }
        }
        printf("%d\n",sum);
    }
}
