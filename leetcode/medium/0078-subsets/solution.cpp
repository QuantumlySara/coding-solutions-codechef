class Solution {
public:
    vector<vector<int>> final;

    #define ps push_back

    void FindSubset(int index, vector<int>& nums, vector<int>& subset) {
        if(index == nums.size()) {
            final.ps(subset);
            return;
        }

        subset.ps(nums[index]);
        FindSubset(index + 1, nums, subset);

        subset.pop_back();
        FindSubset(index + 1, nums, subset);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;

        FindSubset(0, nums, subset);

        return final;
    }
};