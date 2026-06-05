#include <stdio.h>

long long calculateFactorial(int n);
void printRes(int n, long long result);

int main() {
  int num;
    
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Can't calc. factorial for -ve numbers.\n");
  } else {
    long long fact = calculateFactorial(num);        
    printRes(num, fact);
  }

  return 0;
}

long long calculateFactorial(int n) {
  if (n == 0 || n == 1)
    return 1;
  else 
    return n * calculateFactorial(n - 1);
}

void printRes(int n, long long result) {
  printf("The factorial of %d is %lld\n", n, result);
}
