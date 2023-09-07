class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        string t = "";
            for(auto i: words)
                t += separator+i;
            cout << t << endl;

        for(int j =0;j<t.length();j++)
        {
            string w = "";
            while(t[j]!=separator && j<t.length())
            {
                w += t[j++];
            }
            if (w != "")
                res.push_back(w);
        }
        return res;
    }
};