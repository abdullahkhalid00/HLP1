#include <iostream>
using namespace std;

void swap_v(int, int);
void swap_r(int&, int&);
void swap_cr(const int&, const int&);

int main(){

    int x = 7;
    int y = 9;

    cout<<endl<<"For integers: "<<endl;

    swap_v(x, y);
    cout<<endl<<"Value - 1: "<<x<<endl<<"Value - 2: "<<y<<endl;

    swap_r(x, y);
    cout<<endl<<"Value - 1: "<<x<<endl<<"Value - 2: "<<y<<endl;

    swap_cr(x, y);
    cout<<endl<<"Value - 1: "<<x<<endl<<"Value - 2: "<<y<<endl;

    swap_v(7, 9);
    //swap_r(7, 9); This line will not compile since the function accepts non-const values (values by reference)
    swap_cr(7, 9);

    const int cx = 7;
    const int cy = 9;

    cout<<endl<<"For constants: "<<endl;

    swap_v(cx, cy);
    cout<<endl<<"Value - 1: "<<cx<<endl<<"Value - 2: "<<cy<<endl;
    
    //swap_r(cx, cy); This line will not complie since swap_r function only accepts pass by reference (non-const) values
    
    swap_cr(cx, cy);
    cout<<endl<<"Value - 1: "<<cx<<endl<<"Value - 2: "<<cy<<endl;

    swap_v(7.7, 9.9);
    //swap_r(7.7, 9.9); This line will not compile since the function accepts non-const values (values by reference)
    swap_cr(7.7, 9.9);

    double dx = 7.7;
    double dy = 9.9;
    
    cout<<endl<<"For doubles: "<<endl;

    swap_v(dx, dy);
    cout<<endl<<"Value - 1: "<<dx<<endl<<"Value - 2: "<<dy<<endl;

    //swap_r(dx, dy); swap_r function only accepts pass by reference values
    
    swap_cr(dx, dy);
    cout<<endl<<"Value - 1: "<<dx<<endl<<"Value - 2: "<<dy<<endl;

    swap_v(7.7, 9.9);
    //swap_r(7.7, 9.9); This line will not compile since the function accepts non-const values (values by reference)
    swap_cr(7.7, 9.9);

    return 0;
}

void swap_v(int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_r(int& a, int& b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_cr(const int& a, const int& b){
    
    int temp;
    temp = a;
    
    /*  These lines will not compile since const values cannot be modified
        a = b;
        b = temp;
    */
}