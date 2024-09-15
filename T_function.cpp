#include <iostream>
#include <functional>

// ����һ����ͨ����
void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}

int main() {
    // ����һ��function���󣬴洢��ͨ����printNumber
    std::function<void(int)> func = printNumber;

    // ���ô洢����ͨ����
    func(42);
    printNumber(10);
    // ʹ��lambda���ʽ����һ��function����
    std::function<void(int)> lambdaFunc = [](int x) {
        std::cout << "Squared number: " << x * x << std::endl;
    };

    // ���ô洢��lambda���ʽ
    lambdaFunc(5);

    return 0;
}
