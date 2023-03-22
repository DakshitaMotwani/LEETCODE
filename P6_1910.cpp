class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while( pos != string::npos){ //tb tk chlega jb tk element nhi mila
            s.erase(pos, part.length());
            pos = s.find(part); //cause loop h and part ko update krenge

        }
        return s;
    }
};
