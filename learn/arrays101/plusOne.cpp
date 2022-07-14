class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*
        int length = digits.size();
        int sum = 0;
        for (int i = 0; i < length; ++i)
        {
            sum += digits[i] * pow(10, length - i - 1);
        }
        sum++;
        int newLength = 1 + log10(sum);
        vector<int> newDigits(newLength);
        for (int i = newLength - 1; i >= 0; --i)
        {
            newDigits[i] = sum % 10;
            sum -= newDigits[i];
            sum /= 10;
        }
        return newDigits;
        */
        int i;
        int length = digits.size();
        for (i = length - 1; i >= 0; --i)
        {
            if (digits[i] + 1 != 10)
                break;
        }
        if (i == -1)
        {
            vector<int> newDigits(length + 1, 0);
            newDigits[0] = 1;
            // for (int j = 1; j < length + 1; ++j)
            //     newDigits[j] = 0;
            return newDigits;
        }

        else
        {
            vector<int> newDigits(length, 0);
            for (int j = 0; j < i ; ++j)
                newDigits[j] = digits[j];
            newDigits[i] = digits[i] + 1;
            // for (int j = i + 1; j < length; ++j)
            //     newDigits[j] = 0;
            return newDigits;
        }

    }
};