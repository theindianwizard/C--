#ifndef Methods_H_INCLUDED
#define Methods_H_INCLUDED
#include <iostream>
using namespace std;
class Code{
    public:
        void print(string x){
            cout << x << endl;
        }
        void print(int h){
            cout << h << endl;
        }
        void input(string y){
            string z;
            cout << y;
            cin >> z;
        }
};

#endif // Methods_H_INCLUDED