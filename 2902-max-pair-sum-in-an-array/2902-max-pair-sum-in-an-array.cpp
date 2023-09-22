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
        int max = -1,temp;
        for(int i=0;i<nums.size();i++)
        {
          for(int j=i+1;j<nums.size();j++)
          {
            if(findmax(nums[i])==findmax(nums[j]))
            {
              temp = nums[i]+nums[j];
              if(max<temp)
                max = temp;
            }
          }
        }
        return max;
    }
};