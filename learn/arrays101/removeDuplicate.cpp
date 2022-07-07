class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int current = 0;
        int length = nums.size();
        
        while(current != length)
        {
            if (nums[current] != nums[index])
            {
                index++;
                nums[index] = nums[current];
                current++;          
            }

            else
                current++;

        }
        return index + 1;
    }
};