#include<stdio.h>
int main(){
	int n, i;
	printf("enter the n th number:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2==0)
			printf("%d\t",i);
	}
		return 0;
	
}

