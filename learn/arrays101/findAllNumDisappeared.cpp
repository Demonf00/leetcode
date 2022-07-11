class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int length = nums.size();
        vector<int> book(length, 0);
        for (int i : nums)
        {
            book[i - 1] = 1;
        }
        


        vector<int> set;
        for (int i = 0; i < length; ++i)
        {
            if (book[i] == 0)
                set.push_back(i + 1);
        }

        book.clear();
        return set;
    }
};