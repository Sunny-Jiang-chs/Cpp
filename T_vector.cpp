#include <iostream>
//#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v;
    vector<string> dp[100];
    //int a[] = {1, 2, 3, 4, 5};
    //vector<int> v(a, a + sizeof(a) / sizeof(a[0]));
    v.push_back(10);
    v.push_back(10);
    //v.resize(10);
    //v.assign(a, a + sizeof(a) / sizeof(a[0]));
    for (auto i = v.begin(); i < v.end(); i++){
        cout << *i << " ";
    }
    cout << v.size() << endl;
    //cout << sizeof(a);
    cout << *(find(v.begin(),v.end(),10));
}
