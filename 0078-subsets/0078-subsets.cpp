class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void dfs(int index, vector<int>& nums) {
        ans.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            subset.push_back(nums[i]);
            dfs(i + 1, nums);
            subset.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(0, nums);
        return ans;
    }
};
       