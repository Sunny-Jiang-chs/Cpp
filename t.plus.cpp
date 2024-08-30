#include <stdio.h>
#include <iostream>

using namespace std;
struct arr{
    int x;
    int y;
    inline void px(int a) { x += a;}
};
arr operator* (int n, arr a) { 
    //arr c = a;
    a.x = n * a.x;
    a.y = n * a.y;
    return a;
}
ostream& operator<< (ostream& o,arr a){
    o << a.x << "," << a.y;
    return o;
}
int main(){
    arr a;
    a.x = 1;
    a.y = 2;
    a.px(3);
    a = 3*a;
    cout << a.x << "  " << a.y <<endl;
    cout << a;
    return 0;
}