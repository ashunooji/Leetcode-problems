class Solution {
public:

    int findmax(int s)
    {
      int temp=0;
      while(s)
      {
        int re = s%10;
        temp = max(temp,re);
        s/=10;
      }
      return temp;
    }


    int maxSum(vector<int>& nums) {
        int maxi = -1,temp;
        vector<int> s;
        for(int i=0;i<nums.size();i++)
        {
          s.push_back(findmax(nums[i]));
        }
        for(int i=0;i<nums.size()-1;i++)
        {
          for(int j=i+1;j<nums.size();j++)
          {
              if(s[i]==s[j])
                maxi = max(maxi,nums[i]+nums[j]);
          }
        }
        return maxi;
    }
};