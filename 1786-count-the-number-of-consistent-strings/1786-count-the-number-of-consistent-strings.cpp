class Solution {
public:

    int countConsistentStrings(string allowed, vector<string>& words) {
        map<int,int> mp;
        int sum = 0,c;
        for(auto i: allowed)
            mp[i]++;
        for(auto word: words){
            for(auto i: word)
            {
                if(mp.find(i)==mp.end())
                {
                    c=1;
                    break;
                }
            }
            if(c!=1)
                sum++;
            c=0;
        }
        return sum;
    }
};