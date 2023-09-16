#include <iostream>
#include <vector>
using namespace std;

int countQuadruples(vector<int>& a, int L, int R) {
    int n = a.size();
    int count = 0;

    for (int i1 = 1; i1 < n; ++i1) {
        for (int i2 = i1 + 1; i2 < n; ++i2) {
            for (int i3 = i2 + 1; i3 < n; ++i3) {
                for (int i4 = i3 + 1; i4 < n; ++i4) {
                    int value = (((a[i1] & a[i2]) | a[i3] ) ^ a[i4]);
                    if (value >= L && value <= R) {
                        ++count;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    int n, L, R;
    std::cin >> n >> L >> R;
    std::vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int result = countQuadruples(a, L, R);
    std::cout << result << std::endl;

    return 0;
}
