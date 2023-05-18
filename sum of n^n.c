#include <stdio.h>
#include <math.h>
int main(){
    int n,i,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	s+=pow(i,i);
	}
            printf(" %d ", s);
    return 0;
}
