class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int k = INT_MAX, mini = INT_MAX, j;
        for ( int  i = 0 ; i < (int) strs.size() - 1 ; ++i )//for each word
        {
            k = min(k,mini);
            for ( j = 0, mini = 0 ; j < (int) min(strs[i].size(),strs[i+1].size()) ; ++j, ++mini )//for each letter in the current and next word
                if ( strs[i][j] != strs[i+1][j] ) break;
        }
        k = min(k,mini);
        string output;
        if ( strs.size() > 1 )
        {
            for ( int i = 0 ; i < k ; ++i )
            {
                output.push_back(strs[0][i]);
            }
        }
        else if ( strs.size() == 1) return strs[0];
        return output;
    }
};
//Runtime: 8 ms, faster than 98.55% of C++ online submissions for Longest Common Prefix.
//Memory Usage: 8.8 MB, less than 99.82% of C++ online submissions for Longest Common Prefix.
