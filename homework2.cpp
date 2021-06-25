#include <iostream>
using namespace std;

int main()
{
    short int  si  = 2;
    int ii = 265;
    long long li = 265887;
    char cv = 'D';
    bool boov = true;
    float fva = 1.75;
    double dva = 9.2554;

    enum symbols { Symb_x, Symb_o, Symb_empty};

    struct gameopt {
        char gamep[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };  // поле(матрица) char т.к. в нём буду символы x,o и пустой(' ')
        char player1name[32] = {0}; // Имя игрока 1
        char player2name[32] = {0}; // Имя игрока 2 
        bool player1 = rand(); // если true то играет x-ом
        bool player2 = !player1; // обраное значение играет о-ом
        unsigned short int moves = 0; // здесь можно хранить номер хода
        bool whoplays; // Кто играет первым
    };
    gameopt gopt;
    if (gopt.player1 == true) 
    {
        gopt.whoplays = true;
    }
    else if (gopt.player2 == true)
    {
        gopt.whoplays = false;
    } // Так можно узнать у кого крестик и он же начнёт игру



    struct vtype {

        unsigned int isInt : 1;
        unsigned int isChar : 1;
        unsigned int isFloat : 1;
        union {
            int tint;
            char tchar;
            float tfloat;
        };
    };
    vtype ist;
    ist.isInt = 0;
    ist.isChar = 0;
    ist.isFloat = 0;

    ist.tint = 150;
    ist.isInt = 1; // если будем изпользовать int
    //ist.tchar = 'C';
    //ist.isChar = 1; // если будем использовать char
    //ist.tfloat = 150.5421;
    //ist.isFloat = 1; // если будем использовать float
    cout << "Variable int:" << ist.tint << endl;
    cout << "Is variable int used:" << ist.isInt << endl;
    cout << "Variable float:" << ist.tfloat << endl;
    cout << "Is variable float used:" << ist.isFloat << endl;
    cout << "Variable char:" << ist.tchar << endl;
    cout << "Is variable char used:" << ist.isChar << endl;



    system("pause");
    return 0;
}

