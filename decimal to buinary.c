#include <stdio.h>
void decToOctal(int n){
	int octalNum[100];
	int i = 0,j;
	while (n != 0){
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for(j = i - 1; j >= 0; j--)
		printf("%d", octalNum[j]);
}
int main()
{
	int n ;
	printf("enter a number:");
	scanf("%d",&n);
	decToOctal(n);
	return 0;
}
