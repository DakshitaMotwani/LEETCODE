class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int>index;
        int sum=0;
        //paper truck;
        for(int i =0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                string s=garbage[i];
                if(s[j]=='P'){
                    sum=sum+1;
                    index.push_back(i);
                }
            }
        }
        if(index.size()>0){
        sort(index.begin(),index.end());
        int npaper =index.size();
        int mpaper=index[npaper-1];
        for(int k=0;k<mpaper;k++){
            sum=sum+travel[k];
        }
        }
        
        index.clear();
        
       
        //glass truck
        for(int i =0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                string s=garbage[i];
                if(s[j]=='G'){
                    sum=sum+1;
                    index.push_back(i);
                }
            }
        }
        if(index.size()>0){
        sort(index.begin(),index.end());
        int nglass =index.size();
        int mglass=index[nglass-1];
        for(int k=0;k<mglass;k++){
            sum=sum+travel[k];
        }
        }

        index.clear();

        //metal truck
        for(int i =0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].length();j++){
                string s=garbage[i];
                if(s[j]=='M'){
                    sum=sum+1;
                    index.push_back(i);
                }
            }
        }
        if(index.size()>0){
        sort(index.begin(),index.end());
        int nmetal = index.size();
        int mmetal= index[nmetal-1];
        for(int k=0;k<mmetal;k++){
            sum=sum+travel[k];
        }
        }
        return sum;
    }
};
