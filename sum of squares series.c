#include<stdio.h>
int main() {
   int n;
   long sum = 0;
   int i;
   printf("Enter value of n: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
	  	    sum +=  i * i;
	}
   printf("Result is: %ld", sum);
}