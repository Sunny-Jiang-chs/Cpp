#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> m;
    m["talk"] = 2;
    m["me"] = 2;
    //cout << m[1];
    for (auto i = m.begin(); i != m.end(); i++){
        cout << i->first << " " << i->second << endl;
    }

    return 0;
}