class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        unordered_map<char,int>mp;
        int count=0;
        int ans=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]]++;
                count++;    
            }
            else{
                while (mp[s[i]] > 0) {
    mp[s[left]]--;
    left++;
    count--;
}

mp[s[i]]++;
count++;
                

                

                

                
                
                
                

            }

            ans=max(count,ans);

            



        }
        return ans;
        
    }
};
