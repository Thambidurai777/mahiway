#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n--){
	    int t;
	    scanf("%d",&t);int a[t];
	    for(int i=0;i<t;i++){
	        scanf("%d",&a[i]);
	    }
	  int f,count;
	    for(int i=0;i<t;i++){
	        for(int j=0;j<t-1;j++){
	            if(a[j]>a[j+1]){
	                f=a[j];
	                a[j]=a[j+1];
	                a[j+1]=f;
	            }
	        }
	    }count=1;
	    for(int i=0;i<t-1;i++){
	        if(a[i+1]-a[i]>1){
	            count++;
	        }
	    }
	    printf("%d\n",count);
	    
	}
	
	return 0;
}
