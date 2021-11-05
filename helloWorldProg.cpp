/*#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    typedef int feet;
    feet distance;
    cin>>distance;
    cout<<endl<<"Distance (in meters): "<<distance<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
enum color
{
    red,
    green = 4,
    blue
} c;
int main()
{
    c = blue;
    cout << c;
    return 0;
}