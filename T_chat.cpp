#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int target = 3;

    // ʹ�� std::find ����Ŀ��ֵ
    auto it = find(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        cout << "Ŀ��ֵ������������" << endl;
    } else {
        cout << "Ŀ��ֵ��������������" << endl;
    }

    return 0;
}