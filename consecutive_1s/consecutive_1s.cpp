class Solution {
public:

    void helper (int n, string curr, vector<string> &result)
    {
        if(curr.size() == n) {
            result.push_back(curr);
            return;
        }
        //always add '0'
        helper(n, curr+"0", result);

        if(curr.empty() || curr.back != '1')
        helper(n, curr+"1", result);
    }
    vector<string> generateBinaryStrings(int n) {
        // Your code goes here
        vector<string>result;
        helper(n, " ", result);
        return result;
    }
};
