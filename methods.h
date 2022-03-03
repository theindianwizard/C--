#ifndef Methods_H_INCLUDED
#define Methods_H_INCLUDED


#include <iostream> // for cout ,int, string, etc 
#include <sstream> //to convert string into integers and vice versa


using namespace std; //abbreviation


class Language{

    public:

        int convert(string a){ // converts string to number 
            istringstream string_to_number(a);
            int result;
            string_to_number >> result;
            return result;
        }

        string convert(int b){
            ostringstream number_to_string; 
            number_to_string << b;
            return number_to_string.str();
        }
};


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