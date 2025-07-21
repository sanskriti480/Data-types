//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 2

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int a;
    cout << "Enter a Integer:";
    cin >> a;
    cout << "The integer is:" << a <<" and size is:" << sizeof(a) << "bytes" <<endl;
    
    float b;
    cout << "Enter a Decimal number for Float:";
    cin >> b;
    cout << "Number is:" << b << " and size is:" << sizeof(b) << "bytes" <<endl;
    
    char c;
    cout << "Enter a Character:";
    cin >> c;
    cout << "Character is:" << c << " and size is:" << sizeof(c) <<"bytes" <<endl;
    
    double d;
    cout << "Enter a Decimal Number for Double:";
    cin >> d;
    cout << "Number is:" << d << " and size is:" << sizeof(d) << "bytes" <<endl;
    
    
    string e;
    cout << "Enter a String:";
    cin >> e;
    cout << "String is:" << e << " and size is:" << sizeof(e) << "bytes" <<endl;
    
    bool f;
    cout << "Enter 1/0:";
    cin >> f;
    cout << "Input is:" << f << " and size is:" << sizeof(f) << "bytes" <<endl;
    
    return 0;
}

//Output

//Enter a Integer:4
//The integer is:4 and size is:4bytes
//Enter a Decimal number for Float:4.3
//Number is:4.3 and size is:4bytes
//Enter a Character:s
//Character is:s and size is:1bytes
//Enter a Decimal Number for Double:4.8987
//Number is:4.8987 and size is:8bytes
//Enter a String:hello
//String is:hello and size is:32bytes
//Enter 1/0:1
//Input is:1 and size is:1bytes

