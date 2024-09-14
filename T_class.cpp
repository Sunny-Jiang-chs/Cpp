#include <cstdio>
#include <iostream>

using namespace std;

class Date{
private:
    int d, m, y;
public:    
    
        Date(int dd = 0, int mm = 1,int yy = 2000 )
        {
            d = dd;
            m = mm;
            y = yy;
        }
        void print(void){
            cout << d << ' ' << m << ' ' << y << endl;
        }
        friend ostream& operator<<(ostream &o, Date da);
};
ostream& operator<< (ostream& o,Date da)
{
    o << da.d << ' ' << da.m << ' ' << da.y;
    return o;
}

int main(){
    Date day;
    day.print();
    cout << day;
    return 0;
}