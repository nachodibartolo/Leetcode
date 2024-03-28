#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char** fizzBuzz(int n/*, int* returnSize*/){
   char **arr = NULL;
   arr = malloc(n * sizeof(char*));
   for (int i = 1; i <= n; i++){
      if (i%5 == 0 && i%3 == 0){
         arr[i-1] = malloc(9 * sizeof(char));
         strcpy(arr[i-1], "FizzBuzz\0");
      }
      else if (i%3 == 0){
         arr[i-1] = malloc(5 * sizeof(char));
         strcpy(arr[i-1], "Fizz\0");
      }
      else if (i%5 == 0){
         arr[i-1] = malloc(5 * sizeof(char));
         strcpy(arr[i-1], "Buzz\0");
      }
      else{
         arr[i-1] = malloc(11 * sizeof(char));
         sprintf(arr[i-1], "%d", i);
      }
   }
   return arr;
}


int main(){
   char **arrmain = fizzBuzz(15);
   printf("[");
   for (int i= 0; i < 15; i++){
      printf("'%s',",arrmain[i]);
   }
   printf("]");

   return 0;
}