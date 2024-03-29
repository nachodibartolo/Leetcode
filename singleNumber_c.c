#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int singleNumber(int* nums, int numsSize) {
   int *numeroSolo = NULL;
   numeroSolo = (int*)malloc(sizeof(int));

   for (int i = 0; i < numsSize; i++){
   *numeroSolo = *numeroSolo ^ nums[i];
   }
   
   return *numeroSolo;
}

int main(){
   int *num = NULL, n = 5;
   num = (int*)malloc(n *sizeof(int));
   num[0] = 1;
   num[1] = 2;
   num[2] = 4;
   num[3] = 1;
   num[4] = 2;

   int numero = singleNumber(num, n);

   printf("%d", numero);

   return 0;
}