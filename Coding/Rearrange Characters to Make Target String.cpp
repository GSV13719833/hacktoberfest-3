class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> mp;
        for(int i=0; i<s.size(); i++)
            mp[ s[i] ]++;
        
        int copies = 0;
        int flag = true;
        while(flag){
            for(int i=0; i<target.size(); i++){
                if(mp[target[i]] <= 0){
                    flag = false;
                    break;
                }   
                mp[target[i]]--; 
            }    
            if(!flag)
                break; 
            copies++;
        }
        return copies;
    }
};
