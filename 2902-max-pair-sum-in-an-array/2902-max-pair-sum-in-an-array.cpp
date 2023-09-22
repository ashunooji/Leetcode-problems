class Solution {
public:

    int findmax(int s)
    {
      vector<int> t;
      int temp;
      while(s>0)
      {
        temp = s%10;
        s/=10;
        t.push_back(temp);
      }
      return *max_element(t.begin(),t.end());
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