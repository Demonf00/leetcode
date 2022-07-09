class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int write = 0;
        int read = 0;
        int length = nums.size();
        for (; read < length; ++read)
        {
            if (nums[read] != 0)
            {
                nums[write] = nums[read];
                write++;
            }
        }

        for (; write < length; ++write)
            nums[write] = 0;
    }
};