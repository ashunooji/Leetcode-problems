class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        string temp;
        for(auto i: words)
        {
           temp += i+separator;
        }
        vector<string> res;
        string t = "";
        for(int i=0;i<temp.length();i++)
        {
           if(temp[i]!=separator)
           {
             t += temp[i];
           }
           else
           {
             if(t!="")
             {
               res.push_back(t);
               t = "";
             }
           }
        }
        return res;
    }
};