#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int a = 1;
    int *p;
    p = &a;
    cout << *p << endl;
    p = new int[100];
    p[0] = 1;
    p[10] = 100;
    cout << p << endl;
    delete[] p;
    p = (int *)malloc(sizeof(int));
    cout << p;
};
