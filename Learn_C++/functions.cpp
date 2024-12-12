#include<bits/stdc++.h>
using namespace std;
// types of functions:
// void, return, parameterised, non parameterised


// void function =>
// void PrintName(){
//     cout << "hello world";
// }
// int main(){
//     PrintName();
//     return 0;
// }

// parameterised function =>
// void PrintName(string value){
//     // cout << "hello world";
//     cout << "hello " << value;
// }
// int main(){
//     string value;
//     cin >> value;
//     PrintName(value);
//     return 0 ;

// return functions =>
// int sum(int nums1, int nums2){
//     int nums3 = nums1 + nums2;
//     return nums3;
// }

// int main(){
//     int nums1 , nums2;
//     cin >> nums1 >> nums2;
//     int result = sum(nums1, nums2);
//     cout << result;
//     return 0;
// }

// int maximum = max(num1, num2)

// pass by value ( pass the copy to the funciton )
// void dosomething(int num) {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main(){
//     int num = 5;
//     dosomething(num);
//     cout << num;
//     return 0;
// } 

// pass by reference ( pass the address of the int so chages happend to the main num)
void dosomething(int &num) { // just this is difference
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num = 5;
    dosomething(num);
    cout << num;
    return 0;
} 