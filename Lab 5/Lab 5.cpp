#include <iostream>
#include <vector>
#include <string>

using namespace std;

//void translate() {
    //char upperCaseLetter;
    //int upperCaseCode;
    /*
    if ((65 < ch) && (ch < 90)) { //is a capital letter
        return codeTable[ch - 65];
    }
    else if ((97 < ch) && (ch < 122)) { //is lowercase letter
        upperCaseLetter = ch - 32; //converts the number to uppercase number
        upperCaseCode = codeTable[upperCaseLetter - 65]; //get uppercase code
        return upperCaseCode + 32; //convert code back to lowercase
    }
    else { //is not letter
        retun char;
    }
    */
}

void hello(char ch) {
    cout << "hello";
    retun 0;
}

int main()
{
    vector<char> codeTable = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    string input;
    cout << "Input text here: ";
    getline(cin, input);
    int length = input.length();

    cout << "Encoded Message: ";
    for (int i = 0; i < length; i++) {
        hello();
    }

    retun 0;
}




/*
vector<int> scores = { 7, 8, 10, 9, 3, 9 };
//cout << "score: " << scores[3];
int size = scores.size();
cout << size << " playtesters" << endl;

char character = 'H';
string message = "hello";

cout << message << endl;


for (int i = 0; i < size; i++) {
    cout << "playtester # " << (i + 1) << " scores " << scores[i] << endl;
}

for (int score : scores) {
    cout << "score " << endl;
}
*/
