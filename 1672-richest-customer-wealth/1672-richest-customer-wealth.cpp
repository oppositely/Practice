class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int curr, max =0;
        for(vector<int> this_account: accounts) {
            curr =0;
            for(int money: this_account) curr+= money;
            if(max<curr) max = curr;
        }
        return max;
    }
};