#include<stdio.h>
int main(void){
  int A, Q, M, n, store;
  A = 0;
  printf("Enter the dividend: \n");
  scanf("%d", &Q);
  printf("Enter the divisor: \n");
  scanf("%d", &M);
  printf("Enter the number of bits in the dividend: \n");
  scanf("%d", &n);
  while (n > 0){
    A = A<<1;
    Q = Q<<1;
    printf("Q: %d, A: %d\n", Q, A);
    store = A;
    A = A - M;
    if (A >= 0){
      Q++;
    }
    else {
      A = store;  
    }
    n--;
    }
  printf("The quotient is %d  and the remainder is %d\n", Q, M);
  return 0;
}
