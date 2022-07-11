class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int length = heights.size();
        vector<int> sorted(length);
        for (int i = 0; i < length; ++i)
            sorted[i] = heights[i];

        // int current = 0;
        // int left = 0;
        // int right = length - 1;
        // while (left < right){
        //     while(sorted[left] <= sorted[current])
        //         left++;
        //     while(sorted[right] >= sorted[current])
        //         right--;
        //     int temp = sorted[left];
        //     sorted[left] = sorted[right];
        //     sorted[right] = temp;
        // }
        sort(sorted.begin(), sorted.end());
        int count = 0;
        for (int i = 0; i < length; ++i)
        {
            if (sorted[i] != heights[i])
                count++;
        }

        return count;

    }
};