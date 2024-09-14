#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;

    // 使用 std::find 查找目标值
    auto it = find(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        cout << "目标值存在于数组中" << endl;
    } else {
        cout << "目标值不存在于数组中" << endl;
    }

    return 0;
}