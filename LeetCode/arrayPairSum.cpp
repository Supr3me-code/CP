class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        int len = nums.size();
        for(int i=0;i<len;i=i+2){
            result.push_back(min(nums[i],nums[i+1]));
        }
        int sum = 0;
        int len2 = result.size();
        for(int i=0;i<len2;i++){
            sum+=result[i];
        }
        return sum;
    }
};
