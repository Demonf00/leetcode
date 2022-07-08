class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool incFlag = false;
        bool decFlag = false;
        int sizeArr = arr.size() - 1;
        for (int i = 0; i < sizeArr; ++i)
        {
            if (arr[i] == arr[i+1])
                return false;

            else if (arr[i] < arr[i + 1])
            {
                if (!incFlag)
                {
                    incFlag = true;
                    continue;
                }

                else if (incFlag && (!decFlag))
                    continue;
                
                else if (incFlag && decFlag)
                    return false;
            }
            
            else{
                if (!incFlag)
                    return false;

                else if (incFlag && (!decFlag))
                {
                    decFlag = true;
                    continue;
                }
                
                else if (incFlag && decFlag)
                    continue;
            }

        }
        return incFlag && decFlag;
    }
};