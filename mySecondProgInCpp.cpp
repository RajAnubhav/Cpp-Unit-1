#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl<<"The elements of the array are as follows: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}