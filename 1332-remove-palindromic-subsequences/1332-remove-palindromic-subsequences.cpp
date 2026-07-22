class Solution {
public:
    int removePalindromeSub(string s) {
         int n=s.length();
         if(n==0){
            return 0;
         }
       int left=0;
       int right=n-1;
      
       while(left<right){
        if(s[left]!=s[right]){
           return 2; 
        }
        left++;
        right--;

       }
       return 1;
    }
};