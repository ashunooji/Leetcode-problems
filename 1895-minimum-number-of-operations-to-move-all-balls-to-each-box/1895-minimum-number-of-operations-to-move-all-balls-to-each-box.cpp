class Solution {
public:

    int result(string boxes,int i)
    {
        int l=0,r=boxes.length()-1;
        int sum = 0;
        while(l<i)
        {
            if(boxes[l]=='1')
            {
                sum += (i-l);
            }
            l++;
        }

        while(r>i)
        {
            if(boxes[r]=='1')
            {
                sum+=(r-i);
            }
            r--;
        }
        return sum;
    }

    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int res;
        for(int i=0;i<boxes.length();i++)
        {
            res = result(boxes,i);
            ans.push_back(res);
        }
        return ans;
    }
};