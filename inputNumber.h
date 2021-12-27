

#ifndef UNKNOWN_INPUTNUMBER_H
#define UNKNOWN_INPUTNUMBER_H

#include <iostream>

using namespace std;

class inputNumber {

public:


    int enterNumber () {

        int number;

        cout << "Загадай число от 1 до 26. И напиши его:" << endl;

        cin >> number;

        return number;

    }



};


#endif //UNKNOWN_INPUTNUMBER_H
