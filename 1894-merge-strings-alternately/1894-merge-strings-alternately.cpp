class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int n = word1.size();
        int m = word2.size();
        if(n>=m)
        {
              int i =0;
              for(auto l:word2)
               {
                   res += word1[i++];
                   res+=l;
               }
               while(i!=n)
                    res+=word1[i++];
        }
        else
        {
             int j =0;
              for(auto l:word1)
               {
                   res += l;
                   res+=word2[j++];
               }
               while(j!=m)
                    res+=word2[j++];
        }
        return res;
    }
};