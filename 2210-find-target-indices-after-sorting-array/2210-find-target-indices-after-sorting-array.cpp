class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            {
                do{
                    ans.push_back(i);
                }
                while(target!=nums[i]);
            }
        }
        return ans;
    }
};