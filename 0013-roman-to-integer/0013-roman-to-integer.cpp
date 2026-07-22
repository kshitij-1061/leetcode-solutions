class Solution {
public:
    int romanToInt(string s) {
         int value[256]={0};
         value['I']=1;
         value['V']=5;
         value['X']=10;
         value['L']=50;
         value['C']=100;
         value['D']=500;
         value['M']=1000;
         int ans=0;
         int n=s.size();
         for(int i=0;i<n;i++){
            if(i+1<n&&value[s[i]]<value[s[i+1]]){
                ans-=value[s[i]];
            }else{
                ans+=value[s[i]];
            }
         }
        
        
      return ans;  
    }
};