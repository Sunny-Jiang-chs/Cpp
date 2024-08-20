#include <iostream>
#include <set>
#

using namespace std;

int main(){
    set<int> s;
    int a[10] = {0, 1, 2, 3, 333};
    set<int> se(a,a+sizeof(a)/sizeof(a[0]));
    s.insert(2);
    s.insert(1);
    s = {3, 4, 5};
    s.erase(2);
    if (se.find(333) != se.end()){
        cout << 123 << endl;
    }
    cout << s.size();
    return 0;
}
