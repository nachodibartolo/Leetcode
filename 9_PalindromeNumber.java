class Solution {
   public boolean isPalindrome(int x) {
       String n = Integer.toString(x);
       String nr = "";
       int t = 0;
       for (int i = n.length() - 1; i >= 0; i--){
           nr += n.charAt(i);
           t++; 
       }
       return nr.equals(n);
   }
}