#include <stdio.h>
#include <iostream>

using namespace std;
struct Date{
	int d,m,y;
	void init(int dd,int mm, int yy){
		d = dd;m = mm;y= yy;
	}
	void print(void){
		cout << d << " " << m << " "<< y <<"\n";
	}
	Date &add(int dd){
		d += dd;
		return *this;
	}
};
int main(){
    Date day;//cpp中不用typedef，直接用省去struct就行了
    day.init(22,8,2024);
    day.print();
	day.add(10).add(1).add(3);
    day.print();
	return 0;
}