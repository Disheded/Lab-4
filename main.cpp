#include <iostream>
#include <fstream>
using namespace std;


int main() {
    while (true) {
        int number;
        cout << "Please enter a number of exersice: ";
        cin >> number;
        if (number == 1) {
            ofstream outfile;
            string n;
            getline(cin, n);
            outfile.open(n);
            while (true) {
                string s="";
                cout << "Enter you string: " << endl;
                getline(cin, s);
                if (s=="stop"){break;}
                outfile << s << endl;
            }
        }
        if (number == 2) {

        }
        if (number != 1 and number != 2) {
            cout << "Error! Enter a valid number!" << endl;
        }

        string input;
        cout << endl << "Stop y/n";
        cin >> input;
        if (input == "y" or input == "Y") break;
    }
    return 0;
}