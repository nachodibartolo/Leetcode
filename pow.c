#include <stdio.h>
#include <stdlib.h>


double myPow(double x, int n) {
    double num = x;
    if (n > 0){
        while (n > 1){
            x = x*num;
            n = n-1;
        }
        return x;
    }
    else if (n == 0){
        return 1;
    }
    else{
        while (n < -1){
            x = x*num;
            n = n+1;
        }
        return (1/x);
    }
}


int main(){
   printf("%f", myPow(2.10000, 3));

   return 0;
}