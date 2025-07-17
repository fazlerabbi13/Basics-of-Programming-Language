#include<iostream>
using namespace std;

void change(int* ptr){ // pass by reference using pointer
    *ptr=20;
}

int main(){
    int a=10;

    change(a&);

    cout<<a;
    return 0;
}