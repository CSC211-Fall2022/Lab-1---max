//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int operation(string input);
//
//int main() {
//
//    ifstream in("hex.txt");
//
//    if (!in){
//        cout << "File is not open";
//        exit(1);
//    }
//
//    string val1, val2;
//
//    getline(in, val1);
//    getline(in, val2);
//
//    cout << operation(val1) + operation(val2) << endl;
//
//    cout << endl;
//    return 0;
//}
//
//int operation(string input){
//
//    int total = 0;
//    int num;
//    int c = 3;
//
//    for (int i = 0; i < 4; i++){
//        //converts to corresponding number:
//        if (input[i] >= 'A' && input[i] <= 'F'){
//            num = input[i] - 55;
//        } else {num = input[i] - 48;}
//
//        total += num * pow(16, c);
//        c--;
//    }
//
//    return total;
//}


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int operation(string input1, string input2);

int main() {

    string val1, val2;
    
    getline(cin, val1);
    getline(cin, val2);
    
    cout << operation(val1, val2) << endl;

    cout << endl;
    return 0;
}

int operation(string input1, string input2){
    
    int total = 0;
    int num;
    int c = 3;
    
    for (int i = 0; i < 4; i++){
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
    
    for (int i = 0; i < 4; i++){
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
