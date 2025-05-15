// x1 = a+b , x2 = a+c , x3 = b+c, x4 = a+b+c
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int nums[4] = {x1,x2,x3,x4};
    sort(nums,nums+4);
    int a = (nums[0] + nums[1] - nums[2]) / 2;
    int b = (nums[0] + nums[2] - nums[1]) / 2;
    int c = (nums[1] + nums[2] - nums[0]) / 2;

  cout << a << " " << b << " " << c << endl;
    





}