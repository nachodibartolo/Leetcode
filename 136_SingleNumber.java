class Solution {
    public int singleNumber(int[] nums) {
        int numero = 0;
        for (int n : nums){
            numero = numero ^ n;
        }
        return numero;
    }
}
