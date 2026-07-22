class Solution {
public:
    int removePalindromeSub(string s) {
         int n=s.length();
         if(n==0){
            return 0;
         }
       string t= s;
       reverse(t.begin(),t.end());
      
       for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
           return 2; 
        }
       }
       return 1;
    }
};