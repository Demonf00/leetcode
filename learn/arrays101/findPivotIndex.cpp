class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        
        
        int pivotIndex = -1;
        int currentIndex = 0;
        for (int & i : nums)
            sum += i;

        int leftSum;
        int rightSum = sum;
        while(currentIndex<nums.size())
        {
            if (currentIndex == 0)
                leftSum = 0;
            else leftSum += nums[currentIndex - 1];
            rightSum -= nums[currentIndex];
            if (leftSum == rightSum)
            {
                pivotIndex = currentIndex;
                break;
            }
            currentIndex++;

        }   
        return pivotIndex;
    }
};