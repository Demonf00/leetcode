class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> v1(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        if (nums[nums.size() - 1] >= 2 * nums[nums.size() - 2])
        {
            for (int i = 0; i < nums.size(); ++i)
                if (v1[i] == nums[nums.size() - 1])
                    return i;
        }

        return -1;
    }
};