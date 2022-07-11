class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int length = nums.size();
        // if (length == 1)
        //     return nums[0];
        // else if (length == 2)
        //     return max(nums[0], nums[1]);

        
        // else
        // {
            int count = 0;
            int max = -pow(2, 31);
            int smax = -pow(2, 31);
            int tmax = -pow(2, 31);
            int flag = 0;
            for (int i = 0 ; i < length; ++i)
            {
                if (nums[i] > max)
                {
                    tmax = smax;
                    smax = max;
                    max = nums[i];
                    count++;
                }

                else if (nums[i] > smax && nums[i] != max)
                {
                    tmax = smax;
                    smax = nums[i];
                    count++;
                }

                else if ((nums[i] == tmax && flag == 0) || (nums[i] > tmax && nums[i] != smax && nums[i] != max))
                {
                    if (nums[i] == tmax)
                        flag =1 ;
                    tmax = nums[i];
                    count++;
                }
            }
            if (count >= 3)
                return tmax;
            return max;
        // }
        
    }
};