#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int nums[4] = {2,7,11,15};
    int target = 9;
    int fin1;
    int fin2;
    for (int i = 0; i != 4;i++){
        for (int j = 0; j!= 4;j++){
            if(i == j){continue;}
            if(nums[i] + nums[j] == target)
            {
                fin1 = i;
                fin2 = j;
            }
        }
    }
    cout << "[" << fin1 <<"," << fin2 <<"]";



}