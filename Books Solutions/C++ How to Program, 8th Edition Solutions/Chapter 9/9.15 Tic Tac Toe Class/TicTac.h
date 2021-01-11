#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int rows  = 3 ;
const int columns = 3;
const char playerX = 'X' ;
const char playerO = 'O' ; 
static int counter ;
static int countX ; 
static int countO;

enum status { Lose , Won , No_One_Win_Or_Lose };

class TicTac
    {
    private:
       char Matrix[3][3];
       int valueX;
       int valueY;

    public:
        TicTac();
        void setPoint(char [rows][columns]);
        char * getPoint();
        void drawTheGame();
        void Player1();
        void Player2();
        void statusValidation();
        char theWinner();
        void start_TheGame();
        void testContinues();
    };

