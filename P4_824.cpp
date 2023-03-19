class Solution {
public:
    string toGoatLatin(string sentence) {
        int i;
        string ans,word,a="";
        a=a+'a';
        char ch;
        sentence=sentence+" ";
        for(i=0;i<sentence.length();i++)
        {
          ch=sentence[i];
          if(ch!=' ')
          word=word+ch;
          else
          {
              char first;
              first=word[0];
               if(first=='a' || first=='e' || first=='i' || first =='o' || first=='u' || first=='A' || first=='E' || first=='I' || first =='O' || first=='U')
              {
                  word=word+"ma"+a;
                  ans=ans+word+" ";
              }
              else
              {
                  word.erase(0,1);
                  word=word+first+"ma"+a;
                  ans=ans+word+" ";
              }
              a=a+'a';
              word="";
          }
        }
        ans.erase(ans.length()-1,1);
        return ans;
    }
};
