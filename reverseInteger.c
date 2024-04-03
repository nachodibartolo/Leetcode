#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int reverse(int x){
   int i = 0, num = 0;
   if (INT_MIN >= x || x >= INT_MAX){
      return 0;
   }
   else{
      if (x < 0){
         num = num*-1;
      }
      while (x != 0){
         if (INT_MIN/10 > num || INT_MAX/10 < num){
            return 0;
         }
         num = num*10 + x%10;
         x = x/10;
      }
   }
   return num;
}

int main(){

   printf("%d", reverse(1534236469));


   return 0;
}