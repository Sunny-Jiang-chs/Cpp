#include <iostream>
#include <cstring>

using namespace std;

class student {
public:
    int age;
    char* name;
    string job;

public:
    student(int ag = 18, const char* na = nullptr, const string& jo = "") {
        age = ag;
        name = new char[strlen(na) + 1];
        strcpy(name, na);
        job = jo;
    }
    /*student(const student &s){
        name = s.name;
        age = s.age;
        job = s.job;
    }这是不行的*/
    student(const student &s){
        age = s.age;
        job = s.job;
        name = new char[strlen(s.name)];
        strcpy(name, s.name);
    }
    void operator=(student&s){
        age = s.age;
        job = s.job;
        name = new char[strlen(s.name)];
        strcpy(name, s.name);
    }
    /*void operator<< (student& s) {
        cout << s.age << ' ' << s.job;
    }*/
    int operator+(int num){
        return age + num;
    }//符号定义，使用时就是原数据类型加上运算符加上内部内容，所以内部内容当然只能有一个
    virtual ~student() {
        cout << name << ' ';
        delete[] name;
        cout << "Completed" <<endl;
    }
};
ostream& operator<< (ostream& o, student &s) {
    o << s.age << ' ' << s.job;
    return o;
}




int main() {
    student Sunny(18, "Sunny", "something");
    //student jiang = Sunny;与student jiang(Sunny)等价，都与Sunny用同一块内存空间，所以要重定义拷贝函数.
    student jiang(Sunny);
    cout << Sunny + 100 << endl;
    //student jiang = Sunny;
    jiang.age = 20;
    cout << jiang << endl;
    cout << Sunny << endl;
    return 0;
}