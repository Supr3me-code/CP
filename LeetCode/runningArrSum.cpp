class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> result;
        int len = nums.size();
        for(int i=0;i<len;i++){
            sum+=nums[i];
            result.push_back(sum);
        }
        return result;
    }
};
