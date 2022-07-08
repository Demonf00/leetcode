class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int sizeArr = arr.size();
        vector<int> newArray(sizeArr);
        newArray[sizeArr - 1] = -1;
        for (int i = sizeArr - 2; i >= 0; --i)
        {
            newArray[i] = max(newArray[i + 1], arr[i + 1]);
        }
        return newArray;
    }
};