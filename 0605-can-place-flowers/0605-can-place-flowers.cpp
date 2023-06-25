class Solution {
public:

    bool check(vector<int>& flowerbed,int j)
    {
        if(j==0)
        {
            if(flowerbed[j+1]==0)
                return true;
            else
                return false;
        }
        else if(j==flowerbed.size()-1)
        {
            if(flowerbed[j-1]==0)
                return true;
            else 
                return false;
        }
        else
        {
            if(flowerbed[j-1]==0&&flowerbed[j+1]==0)
                return true;
            else
                return false;
        }
    }

    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i=0;i<n;i++)
        {
             if(flowerbed.size()==1)
             {
                  if(flowerbed[0]==0)
                    {
                        count++;
                        flowerbed[0]=1;
                    }
             }
             else{
            for(int j=0;j<flowerbed.size();j++)
            {
                if(flowerbed[j]!=1&&check(flowerbed,j))
                {
                    count++;
                    flowerbed[j]=1;
                }
            }
             }
        }
        if(count>=n)
            return true;
        else 
            return false;
    }
};