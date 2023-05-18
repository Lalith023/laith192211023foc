#include <stdio.h>
#include <math.h>
int main(){
   int n,o,r,a = 0;
   float b = 0.0;
   printf("Enter an integer: ");
   scanf("%d",&n);
   o=n;
   for (o=n; o!=0;++a){
       o/=10;
}
   for (o=n;o!=0;o/=10){
       r=o%10;  
      b+=pow(r,n);
   }
   if((int)b==n)
    printf("%d is an Armstrong number.",n);
   else
    printf("%d is not an Armstrong number.",n);
   return 0;
}