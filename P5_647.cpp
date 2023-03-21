class Solution {
public:
    int expandaroundindex(string s, int i, int j){ //here j is vohi pass by refernce h,jhn varibel name change ho jata h
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0; i<n; i++){ //i is center index and j is right one 
            //for odd
            int oddans = expandaroundindex(s, i, i);
            count = count + oddans;
            //for even
            int evenans = expandaroundindex(s, i, i+1);
            count = count + evenans;
        }
        return count;
    }
};
