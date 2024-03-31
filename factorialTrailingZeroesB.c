#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int trailingZeroes(int n) {
   int ceros = 0;
   while (n > 0){
      n = n/5;
      ceros = ceros + n;
   }
   return ceros;
}

int main(){
   printf("%d", trailingZeroes(30));
}