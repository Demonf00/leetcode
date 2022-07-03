class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ran[26]={0};
        int mag[26]={0};
        for (char i : ransomNote)
            ran[i - 'a']++;
        
        for (char i : magazine)
            mag[i - 'a']++;

        for (int i = 0; i < 26; ++i)
        {
            if (mag[i] < ran[i])
                return false;
        }
        return true;
    }
};