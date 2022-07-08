class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int sizeArr = arr.size();
        for (int i = 0; i < sizeArr; ++i)
        {
            for (int j = 0; j < sizeArr; ++j)
                if (arr[i] == 2 * arr[j] && i != j)
                    return true;
        }
        return false;
    }
};