// C++ program for function overloading

#include<iostream>
using namespace std;

void display(int var) {
    cout << "Integer number: " << var << endl;
}

void display(float var) {
    cout << "Float number: " << var << endl;
}//main function
int main()
{
    int a = 5;
    float b = 5.5;

    display(a);
    display(b);
    return 0;
}

