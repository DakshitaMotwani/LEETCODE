class Solution {
public:
    string reverseOnlyLetters(string s) {
        string news  = "";
        for(int i =0; i<s.length();i++){
            char c = s[i];
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                news.push_back(c);
            }
            
        }
        reverse(news.begin(),news.end());
        int j = 0;
        for(int i = 0; i<s.length();i++){
            char c = s[i];
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
              s[i] = news[j];
              j++;
            }
        }
        return s;
    }
};
