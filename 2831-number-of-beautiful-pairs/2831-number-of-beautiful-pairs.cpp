#include<string>
class Solution {
public:

    int gcd(int a,int b)
    {
      int res = min(a,b);
      while(res>0)
      {
        if(a%res==0&&b%res==0)
          break;
        res--;
      }
      return res;
    }

    int countBeautifulPairs(vector<int>& nums) {
       int count =0,li,fi;
        for(int i=0;i<nums.size()-1;i++)
        {
          for(int j=i+1;j<nums.size();j++)
          {
            int x = nums[i];
            fi = x%10;
            while(x!=0)
            {
              fi = x%10;
              x/=10;
            }
            li = nums[j]%10; 
            if(gcd(fi,li)==1)
              {
                count++;
              }
          }
        }
        return count;
    }
};