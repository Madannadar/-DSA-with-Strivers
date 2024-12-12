#include<bits/stdc++.h>
using namespace std;

int main(){
    // take input as age and return adult or not
    // int age;
    // cin >> age;
    // if ( age >= 18 ){
    //     cout<< "Your Adult"<<endl;
    // }else{
    //     cout << "Your not an adult fuck off"<< endl;
    // }

    // find if eleigble for job

    // int age;
    // cin >> age;
    // if (age < 18 ){
    //     cout << "not eligible for job";
    // }else if (age >= 18 && age <= 60){  // no need to write (age >= 18)
    //     cout << "eligible for job";
    // }else{
    //     cout << "eligible but u should retire";
    // }

    int age;
    cin >> age;
    if (age < 18 ){
        cout << "not eligible for job";
    }else if (age >= 18 && age <= 60){  // no need to write (age >= 18)
        cout << "eligible for job,";
        if ( age <= 50){
            cout<< "u have still life left";
        }
    }else{
        cout << "eligible but u should retire";
    }
}