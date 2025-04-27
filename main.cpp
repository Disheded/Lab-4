#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ofstream outfile;
    string n;
    getline(std::cin, n);
   for (int i = 0; i < n.length(); i++) {
       if (n[i]==' '){
           n[i] = '_';
       }
   }
    cout << n << endl;


    return 0;
}