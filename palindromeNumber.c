#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {
   if ( x==0 ){
      return true;
   }

   else if(x < 0 || x%10 == 0){
      return false;
   }

   int n = 0;

   while (n < x){
      n = n*10 + x%10;
      x = x/10;
   }

   return ( x == n || x == n/10);
}

int main(){
   printf ("%d", isPalindrome(11211));

   return 0;
}