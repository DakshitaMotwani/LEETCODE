class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=words.size();
        int s=pref.size();
        int count=0;
        
        for(int i=0;i<n;i++){
            int m=0;
            for(int j=0;j<s;j++){
                if(words[i][j]!=pref[j]){
                    break;
                }
                else{
                    m++;
                }
            }
            if(m==s){
                count++;
            }
        }
        return count;
        
         
    }
};
