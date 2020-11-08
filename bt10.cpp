#include <iostream>
#include <string>
using namespace std;

//Cach 1

bool checkPrime(int numb) {
    if(numb == 1 || numb == 2) {
        return true;
    } else {
        for(int i = 2; i < numb; i++) {
            if(numb % i == 0) {
                return false;
            } else {
                return true;
            }
        }
    }
}

int invertNumb(int numb) {
    string str = to_string(numb);
    string ivn = "";
    for(int i = str.length() - 1; i >= 0; i--) {
        ivn += str.at(i);
    }
    return stoi(ivn);
}

bool solver(int numb) {
    if(to_string(numb).length() == 5) {
        if(invertNumb(numb) == numb && checkPrime(numb)) {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    for(int i = 0; i <= 999999; i++) {
        if(solver(i)) {
            cout << i << endl;
        }
    }
}