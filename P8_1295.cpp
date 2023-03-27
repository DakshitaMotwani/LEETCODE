class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int j=nums[i];
            if((j>=10 && j<=99) || (j>=1000 && j<=9999) || j==100000){
                count++;
            }
        }
        return count;
    }
};
