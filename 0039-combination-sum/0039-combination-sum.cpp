class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(int start, vector<int>& candidates, int target) {

        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            if (candidates[i] > target)
                continue;

            path.push_back(candidates[i]);

            dfs(i, candidates, target - candidates[i]); // reuse allowed

            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        dfs(0, candidates, target);
        return ans;
    }
};