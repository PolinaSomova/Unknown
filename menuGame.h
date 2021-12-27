

#ifndef UNKNOWN_MENUGAME_H
#define UNKNOWN_MENUGAME_H

#include <iostream>
#include "closeQuestions.h"
#include "inputNumber.h"

using namespace std;


class menuGame {

public:

    closeQuestions closeQuestions;
    inputNumber inputNumber;

    char nextMove () {

        char next;
        cout << "\n------------\n";
        cout << "Как ответишь на вопрос - напиши *\n";
        cout << "Так ты передашь ход другому\n";
        cin >> next;

        return next;
    }

    void menu () {

        while(true){
            closeQuestions.menuCloseQuestions(inputNumber.enterNumber());
            nextMove();
            cout << "\n******\n";
        }


    }









};


#endif //UNKNOWN_MENUGAME_H
