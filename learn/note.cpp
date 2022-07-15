#include <iostream>

int main() {
    // 1. initialize
    vector<int> v0;
    vector<int> v1(5, 0);
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);
    // 2. cast an array to a vector
    int a[5] = {0, 1, 2, 3, 4};

    /*************important here***********/
    vector<int> v4(a, *(&a + 1));


    // 3. get length
    cout << "The size of v4 is: " << v4.size() << endl;
    // 4. access element
    cout << "The first element in v4 is: " << v4[0] << endl;
    // 5. iterate the vector
    cout << "[Version 1] The contents of v4 are:";
    for (int i = 0; i < v4.size(); ++i) {
        cout << " " << v4[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of v4 are:";
    for (int& item : v4) {
        cout << " " << item;
    }
    cout << endl;
    cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
    // 6. modify element
    v4[0] = 5;
    // 7. sort
    sort(v4.begin(), v4.end());
    // 8. add new element at the end of the vector
    v4.push_back(-1);
    // 9. delete the last element
    v4.pop_back();



    /********template**********/

    template <size_t n, size_t m>
    void printArray(int (&a)[n][m]) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }



    template <typename T, std::size_t N>   // (2)
    class Array{

    public:
        std::size_t getSize() const {
            return N;
        }

    private:
        T elem[N];
    };

    std::cout << '\n';

    Array<int, 100> intArr;             // (3)
    std::cout << "intArr.getSize(): " << intArr.getSize() << '\n';

    Array<std::string, 5> strArr;       // (4)
    std::cout << "strArr.getSize(): " << strArr.getSize() << '\n';

    Array<Array<int, 3>, 25> intArrArr; // (5)
    std::cout << "intArrArr.getSize(): " << intArrArr.getSize() << '\n';

    std::cout << '\n';


}