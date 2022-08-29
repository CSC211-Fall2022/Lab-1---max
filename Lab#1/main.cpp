#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int operation(string input);

int main() {

    ifstream in("hex.txt");

    if (!in){
        cout << "File is not open";
        exit(1);
    }
    
    string val1, val2;
    
    getline(in, val1);
    getline(in, val2);
    
    cout << operation(val1) + operation(val2) << endl;

    cout << endl;
    return 0;
}

int operation(string input){
    
    int total = 0;
    int num;
    int c = 3;
    
    for (int i = 0; i < 4; i++){
        //converts to corresponding number:
        if (input[i] >= 65 && input[i] <= 70){
            num = input[i] - 55;
        } else {num = input[i] - 48;}

        total += num * pow(16, c);
        c--;
    }

    return total;
}
