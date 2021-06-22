
#include<iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string str;
    int exclusive = 0;
    int numbers = 0;
    cout << "Enter integers: ";
    getline(cin, str);
    stringstream number;
    number << str;
    number >> numbers;
    exclusive = exclusive ^ numbers;
    cout << str << endl;

    cout << exclusive << endl;


    return 0;
}//end of main func