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
            cin.ignore();
            cout << "Enter name of the file: " << endl;
            getline(cin, n);
            n += ".txt";
            outfile.open(n);
            while (true) {
                string s="";
                cout << "Enter you string (stop to end writing): " << endl;
                getline(cin, s);
                if (s=="stop"){break;}
                outfile << s << endl;
            }
        }
        if (number == 2) {
            cin.ignore();
            cout << "Enter login: " << endl;
            string login;
            getline(cin, login);

            cout << "Enter password: " << endl;
            string password;
            getline(cin, password);

            ifstream users("users.txt");
            string l, p;
            bool found = false;
            while (users >> l >> p) {
                if (l == login and p == password) {
                    found = true;
                    break;
                }
            }
            users.close();
            if (!found) {
                cout << "Login or password not found" << endl;
            }
            if (found) {
                cout << "1 - Clear and write\n2 - Write without clear";
                int choice;
                cin >> choice;
                cin.ignore();

                ofstream file;
                if (choice == 1)
                    file.open(login + ".txt", ios::trunc);
                else
                    file.open(login + ".txt", ios::app);

                
                string text;
                cout << "Enter the text (stop to end writing):\n";
                while (getline(cin, text)) {
                    if (text == "stop") break;
                    file << text << endl;
                }
                file.close();
            }

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