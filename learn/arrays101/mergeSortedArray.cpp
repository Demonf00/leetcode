class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newArray(m + n);
        int firstIndex = 0;
        int secondIndex = 0;

        while(firstIndex != m || secondIndex != n)
        {
            if (firstIndex == m)
            {
                newArray[firstIndex + secondIndex] = nums2[secondIndex];
                secondIndex++;
            }

            else if (secondIndex == n)
            {
                newArray[firstIndex + secondIndex] = nums1[firstIndex];
                firstIndex++;
            }

            else if (nums1[firstIndex] <= nums2[secondIndex])
            {
                newArray[firstIndex + secondIndex] = nums1[firstIndex];
                firstIndex++;
            }

            else{
                newArray[firstIndex + secondIndex] = nums2[secondIndex];
                secondIndex++;
            }
        }

        nums1.resize(m + n);
        for (int i = 0; i < m + n; ++i)
        {
            nums1[i] = newArray[i];
        }
    }
};