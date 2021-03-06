class Solution {
public:
    // int numberOfSteps(int num) {
    //     int current = num;
    //     int steps = 0;
    //     while(current != 0)
    //     {
    //         if (current % 2)
    //         {
    //             current--;
    //             steps++;
    //         }

    //         else
    //         {
    //             current /= 2;
    //             steps++;
    //         }
    //     }
    //     return steps;
    // }

    //using bitwise method
    int numberOfSteps(int num) {
        int current = num;
        int steps = 0;
        while(current != 0)
        {
            steps += current & 0x01;
            current >>= 1;
            steps++;
        }
        return steps;
    }
};