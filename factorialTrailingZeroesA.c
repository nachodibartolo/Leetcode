#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int trailingZeroes(int n) {
   int ceros = 0;
   for (int i = 1; pow(5, i) <= n; i++){
      ceros += floor(n / pow(5, i));
   }
   return ceros;
}

int main(){
   printf("%d", trailingZeroes(5));
}