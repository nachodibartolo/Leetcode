class Solution {
   public int trailingZeroes(int n) {
       int ceros = 0;
       for (int i = 1; n/Math.pow(5,i) != 0; i++){
           ceros += (n/Math.pow(5,i));
       }
       return ceros; 
   }
}