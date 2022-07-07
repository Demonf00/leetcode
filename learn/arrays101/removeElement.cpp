class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int current = 0;
        int length = nums.size();
        while(current != length)
        {
            if (nums[current] != val)
            {
                nums[index] = nums[current];
                current++;
                index++;
            }

            else
                current++;

        }
        return index;
    }
};