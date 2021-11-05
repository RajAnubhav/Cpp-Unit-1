#include<iostream>
using namespace std;

class Y; // forward declaration of a class

class X{
    public:
        int data1;
        void setData(int d1){
            data1 = d1;
        }
        friend void add(X o1, Y o2);
};

class Y{
    public:
        int data2;
        void setData(int d2){
            data2 = d2;
        }
        friend void add(X o1, Y o2);
};

void add(X o1, Y o2){
    cout << "The sum of the complex number is : " << o1.data1 + o2.data2 << endl;
}

int main(){
    X x1;
    x1.setData(2);

    Y y1;
    y1.setData(3);

    add(x1, y1);
    return 0;
}