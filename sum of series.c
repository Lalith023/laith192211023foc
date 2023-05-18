#include<stdio.h>
int main()
{
    int N, i,s=0;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    printf("\n");
    for(i=1; i<=N; i++)
    {
        if(i==N)
        	s+=i;
            printf("%d", s);
        else
            printf("%d,", i);
    }
    return 0;
}