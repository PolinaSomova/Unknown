

#ifndef UNKNOWN_INPUTNUMBER_H
#define UNKNOWN_INPUTNUMBER_H

#include <iostream>

using namespace std;

class inputNumber {

public:


    int enterNumber () {

        int number;

        cout << "������� ����� �� 1 �� 26. � ������ ���:" << endl;

        cin >> number;

        return number;

    }



};


#endif //UNKNOWN_INPUTNUMBER_H
