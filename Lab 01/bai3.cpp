#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int findSingleNumber(vector<int> nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> arr = {2, 3, 2, 3, 5, 4, 5};
    sort(arr.begin(), arr.end());
    int uniqueNumber = findSingleNumber(arr);
    std::cout << "Số xuất hiện đúng 1 lần là: " << uniqueNumber << endl;
    return 0;
}
