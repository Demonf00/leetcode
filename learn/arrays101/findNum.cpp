class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i : nums)
        {
            count += evenOrNot(i);
        }
        return count;
    }

    bool evenOrNot(int a)
    {
        if (a < 10)
            return false;
        else if (10 <= a && a <= 99)
            return true;
        else if (100 <= a && a <= 999)
            return false;
        else if (1000 <= a && a <= 9999)
            return true;
        else if (10000 <= a && a <= 99999)
            return false;
        else if (a == 100000)
            return true;
        else
            return false;
    }

};