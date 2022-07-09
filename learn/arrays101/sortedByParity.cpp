class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int length = nums.size();
        vector<int> newArray(length);
        int evenIndex = 0;
        int oddIndex = length - 1;
        for (int i : nums)
        {
            if (!(i % 2))
                newArray[evenIndex++] = i;
            else
                newArray[oddIndex--] = i; 
        }
        return newArray;
    }
};