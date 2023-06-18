class Solution {
public:
    int minPartitions(string n) {
        int max = 0;
        for(auto i: n)
        {
            if(max<i)
            {
                max=i;
            }
        }
        return max-'0';
    }
};