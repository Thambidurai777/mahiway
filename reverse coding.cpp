#include <stdio.h>

int main() {
	int t;
 scanf("%d",&t);
 while(t--){
     int n,m;
     scanf("%d%d",&n,&m);
     int c=(n*(n+1))/2;
     if(c==m)
         printf("1\n");
        else
            printf("0\n");
 }
	return 0;
}
