class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        int middle = 0;
        int tempMin = absolute(nums[0]);
        int length = nums.size();
        for (int i = 0; i < length; ++i)
        {
            int current = absolute(nums[i]);
            if (current <= tempMin)
            {
                tempMin = current;
                middle = i;
            }
            else
                break;
        }

        if (middle == 0)
        {
            for (int i : nums)
                squares.push_back(i * i);
        }

        else if (middle == length - 1)
        {
            for (int i = length - 1; i >= 0 ; --i)
                squares.push_back(nums[i] * nums[i]);
        }

        else
        {
            int leftindex = middle - 1;
            int rightindex = middle + 1;
            int left, right;

            squares.push_back(nums[middle] * nums[middle]);
            
            while (leftindex != -1 || rightindex != length)
            {
                if (leftindex == -1)
                {
                    squares.push_back(nums[rightindex] * nums[rightindex]);
                    rightindex++;
                }

                else if (rightindex == length)
                {
                    squares.push_back(nums[leftindex] * nums[leftindex]);
                    leftindex--;
                }

                else{
                    left = nums[leftindex] * nums[leftindex];
                    right = nums[rightindex] * nums[rightindex];
                    if (left <= right)
                    {
                        squares.push_back(left);
                        leftindex--;
                        
                    }

                    else
                    {
                        squares.push_back(right);
                        rightindex++;                   
                    }
                }

            }


        }


        return squares;
    }

    int absolute(int a)
    {
        if (a < 0)
            return -a;
        return a;
    }
};