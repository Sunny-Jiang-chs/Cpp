#include <stdio.h>
#include <iostream>

using namespace std;
class Date{
public:
	int d,m,y;
	Date(){
		d = 1;
		m = 2;
		y = 1000;
	}
	Date(int dd){
		d = dd;
		m = 2;
		y = 1000;
	}
	Date(double mm){
		d = 1;
		m = (int)mm;
		y = 1000;
	}
	void init(int dd,int mm, int yy){
		d = dd;m = mm;y= yy;
	}
	void print(void){
		cout << d << " " << m << " "<< y << endl;
	}
	Date& add(int dd){
		d += dd;
		return *this;
	}
};
int add(int a) {
	a += 1;
	return a;
}
int add(int a = 100, int b = 20, int c = 3)
{
	a += 2;
	return a + b + c;
}
int main(){
    Date day;//cpp中不用typedef，直接用省去struct就行了
    //day.init(22,8,2024);
    day.print();
	//day.add(10).add(1).add(3);
    //day.add(111).print();
	day.add(1).add(2).print();
	day.print();
	printf("%d\n", add(1,2));
	cout  << add();
	return 0;
}