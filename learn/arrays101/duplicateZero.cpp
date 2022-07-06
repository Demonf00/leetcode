class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int length = arr.size();
        int arrindex = 0;
        int newindex = 0;
        vector<int> newArray(length);
        for (arrindex = 0; newindex < length && arrindex < length; ++arrindex)
        {
            if (arr[arrindex] != 0)
            {
                newArray[newindex] = arr[arrindex];
                newindex++;
            }

            else{
                newArray[newindex] = 0;
                newindex++;
                if (newindex == length)
                    break;
                newArray[newindex] = 0;
                newindex++;
            }
        }

        for (int i = 0; i < length; ++i)
            arr[i] = newArray[i];
        
        newArray.clear();
    }
};