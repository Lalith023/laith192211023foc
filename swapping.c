#include<stdio.h>
int main() {
  int first, second, temp;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);
  temp = first;
  first = second;
  second = temp;
  printf("\nAfter swapping\n %d\n %d", first, second);
  return 0;
}

