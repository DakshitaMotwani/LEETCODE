class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int i,j;
        int count=0;
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(nums[i]+nums[j] == target && i!=j){
                    count++;
                }
            }
        }
        return count;

    }
};
