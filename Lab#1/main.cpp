#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int addTwoHex(char input1[], char input2[]);
string decToHex(int x);

int main() {
    
    const int size = 5;
    
    char val1[size];
    char val2[size];
    
    cin.getline(val1, size);
    cin.getline(val2, size);
    
    cout << "The decimal sum of " << val1 << " and " << val2 << " is " << addTwoHex(val1, val2) << '.';
    decToHex(addTwoHex(val1, val2));
    
    return 0;
}

int addTwoHex(char input1[], char input2[]){
    
    int total = 0;
    int num;
    
    int c = 3;
    
    for (int i = 0; input1[i] != '\0'; i++){
        //converts to corresponding number:
        if (input1[i] >= 'A' && input1[i] <= 'F'){
            num = input1[i] - 55;
        } else if (input1[i] >= 'a' && input1[i] <= 'f'){
            num = input1[i] - 87;
        } else {num = input1[i] - 48;}

        total += num * pow(16, c);
        c--;
    }
    
    c = 3;
    
    for (int i = 0; input2[i] != '\0'; i++){
        //converts to corresponding number:
        if (input2[i] >= 'A' && input2[i] <= 'F'){
            num = input2[i] - 55;
        } else if (input2[i] >= 'a' && input2[i] <= 'f'){
            num = input2[i] - 87;
        } else {num = input2[i] - 48;}

        total += num * pow(16, c);
        c--;
    }

    return total;
}

string decToHex(int x){
    
    string hex = "";
    int div = x;
    
    while (div > 0){
        
        int comp = div % 16;
        
        if (comp > 9){
            //convert to letter
            hex = static_cast<char>(comp + 55) + hex;

        } else {
            hex = to_string(comp) + hex;
        }

        
        div/= 16;
        
    }
    
    return hex;
}
