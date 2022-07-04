class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentMax = 0;
        int ongoing = 0;
        // int flag = 0;

        for (int i : nums)
        {
            if (i == 1)
                ongoing++;
            else{
                currentMax = ongoing > currentMax ? ongoing : currentMax;
                ongoing = 0;
            }
        }
        currentMax = ongoing > currentMax ? ongoing : currentMax;
        return currentMax;
    }
};