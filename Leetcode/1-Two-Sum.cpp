class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v = {0,0};
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    v[0]=i;
                    v[1]=j;
                    break;
                }
            }
        }
        return v;
    }
};