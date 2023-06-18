class Solution {
public:

    bool ispalindromic(string str)
    {
        int l=0,r=str.length()-1;
        while(l<=r)
        {
            if(str[l]!=str[r])
                return false;
            ++l;
            --r;
        }
        return true;
        
    }

    bool checker(int n,int i)
    {
        string str = "";
        while(n!=0)
        {
            str+=to_string(n%i);
            n/=i;
        }
        if(ispalindromic(str))
            return true;
        else 
            return false;
    }

    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++)
        {
            int temp = n;
            if(!checker(temp,i))
            {
                return false;
            }
        }
        return true;
    }
};