#include <iostream>
#include <functional>

// 定义一个普通函数
void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}

int main() {
    // 创建一个function对象，存储普通函数printNumber
    std::function<void(int)> func = printNumber;

    // 调用存储的普通函数
    func(42);
    printNumber(10);
    // 使用lambda表达式创建一个function对象
    std::function<void(int)> lambdaFunc = [](int x) {
        std::cout << "Squared number: " << x * x << std::endl;
    };

    // 调用存储的lambda表达式
    lambdaFunc(5);

    return 0;
}
