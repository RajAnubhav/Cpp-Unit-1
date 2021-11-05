// this is to write the program on the use of the functions
#include<iostream>
using namespace std;
int enteredValue(int a){
    int b=a;
    cout<<"b = "<<b<<endl;
    return b;
}
int main(){
    int a;
    cin>>a;
    cout<<"a = "<<a<<endl;
    int result = enteredValue(a);
    return 0;
}