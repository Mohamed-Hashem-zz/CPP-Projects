#include "TicTac.h"

TicTac::TicTac()
    {
        char mat [rows][columns];

        for (int i = 0; i < rows ; i++)
                {
                    for (int j = 0; j < columns; j++)
                                {
                                    mat[i][j] = ' ' ;
                                }   
                } 
        setPoint( mat );
    }

void TicTac :: setPoint(char Mat[rows][columns])
    {
        for (int i = 0; i < rows ; i++)
            {
                for (int j = 0; j < columns ; j++)
                        {
                             Matrix[i][j] = Mat[i][j];
                        }
            }
    }

char * TicTac::getPoint()
    {
         return *Matrix ;
    }

void TicTac::drawTheGame ()
    {
      //  system("cls");	 // to make the page clear and start as Start Point	.

        cout << endl;

		cout<<"\t \t \t   ===================== \n";
		cout<<"\t \t \t   || Tic - Tac - Toe || \n";
		cout<<"\t \t \t   ===================== \n";

		cout<<endl;
      
		cout<<"\t \t  Choose an Empty cell and Follow a Strategy to Win \n " << endl;

        cout <<  "\t \t \t \t 0   1   2" <<endl << endl;;

		cout<<"\t \t \t  0 \t " << Matrix[0][0] << " | " << Matrix[0][1] << " | " << Matrix[0][2] << "\n";

		cout<<"\t \t \t       ------------- " << endl;

		cout<<"\t \t \t  1 \t " << Matrix[1][0] << " | " << Matrix[1][1] << " | " << Matrix[1][2] << "\n";

		cout<<"\t \t \t       ------------- " << endl;

		cout<<"\t \t \t  2 \t " << Matrix[2][0] << " | " << Matrix[2][1] << " | " << Matrix[2][2] << "\n";

	    cout<<"\n \n = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  \n \n " ;
    }

 void TicTac:: Player1()
    { 
     countX = 0 ;

    cout << "Enter the Coordinates of the Field of Player X : ";

    cin >> valueX >> valueY  ;

        for (int i = 0; i < rows ; i++)
            {
                for (int j = 0; j < columns; j++)
                        {
                              if ( i == valueX && j == valueY && Matrix[i][j] == ' ' )
                                    {
                                        Matrix[i][j] = playerX ;
                                    }
                              else
                                countX++;
                        }
            }

        if  (countX == 9) 
          {
              cout << "\a\n\tU Should Enter Valid Value >>>> this Field has been token" << endl;
              cin.ignore();
              cin.clear();
              Player1();
          }

        counter++;
    }

 void TicTac:: Player2()
    {  
    countO = 0 ;

        cout << "Enter the Coordinates of the Field of Player Y : ";

        cin >> valueX >> valueY  ;
    
        for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < columns ; j++)
                            {
                            if (i == valueX && j == valueY && Matrix[i][j] == ' ' )
                                    {
                                        Matrix[i][j] = playerO ;
                                    }
                            else
                                     countO++;
                            }
            }

        if  (countO == 9) 
          {
              cout << "\a\n\tU Should Enter Valid Value >>>> this Field has been token\n" << endl;
              cin.ignore();
              cin.clear();
              Player2();
          }
             
        counter++;
    }

 void TicTac :: statusValidation()
     {
        if (counter == 9 && theWinner()== '/' ) 
            {
                    cout << "\a \n \t The Game End and No One Win or Lose" << endl ;
                    testContinues();
            }

        else if ( theWinner() == playerO )
            {
                    cout<<"\a \n \t The Game is over , The Player \' O '\ is the Winner \n" << endl;
                   testContinues();
            }	

        else if ( theWinner() == playerX )
            {
                    cout<<"\a \n \t The Game is over , The Player \' X '\ is the Winner \n" << endl;
                    testContinues();
            }       
                cout << endl;
     }
 void TicTac :: testContinues()
     {
            TicTac();

            char ch ;

            cout << "\t - Do u want to play again (y / n ) :  ";
            cin >> ch ;

            cout << endl;

            if (ch == 'y' || ch == 'Y') 
                start_TheGame();
            else if  ( ch == 'n' || ch == 'N' )
                    exit(0);
            else
                cout << "\n U have been Entered unValid Value , please Try again " << endl , testContinues();
     }

 char TicTac::theWinner()
     {                               
        if ( Matrix[0][2] == playerX &&  Matrix[1][1] == playerX && Matrix[2][0] == playerX )
        return playerX;

        if ( Matrix[0][0] == playerX &&  Matrix[1][1] == playerX && Matrix[2][2] == playerX )
        return playerX ;

        if ( Matrix[0][0] == playerX &&  Matrix[0][1] == playerX && Matrix[0][2] == playerX )
        return playerX;

        if ( Matrix[1][0] == playerX &&  Matrix[1][1] == playerX && Matrix[1][2] == playerX )
        return playerX;

        if ( Matrix[2][0] == playerX &&  Matrix[2][1] == playerX && Matrix[2][2] == playerX )
        return playerX;

        if ( Matrix[0][0] == playerX &&  Matrix[1][0] == playerX && Matrix[2][0] == playerX )
        return playerX;

        if ( Matrix[0][1] == playerX &&  Matrix[1][1] == playerX && Matrix[2][1] == playerX )
        return playerX;

        if ( Matrix[0][2] == playerX &&  Matrix[1][2] == playerX && Matrix[2][2] == playerX )
        return playerX;
        
                /////////////////// Second Player  ///////////////////////

        if ( Matrix[0][2] == playerO &&  Matrix[1][1] == playerO && Matrix[2][0] == playerO )
        return playerO;

        if ( Matrix[0][0] == playerO &&  Matrix[1][1] == playerO && Matrix[2][2] == playerO )
        return playerO ;

        if ( Matrix[0][0] == playerO &&  Matrix[0][1] == playerO && Matrix[0][2] == playerO )
        return playerO;

        if ( Matrix[1][0] == playerO &&  Matrix[1][1] == playerO && Matrix[1][2] == playerO )
        return playerO;

        if ( Matrix[2][0] == playerO &&  Matrix[2][1] == playerO && Matrix[2][2] == playerO )
        return playerO;

        if ( Matrix[0][0] == playerO &&  Matrix[1][0] == playerO && Matrix[2][0] == playerO )
        return playerO;

        if ( Matrix[0][1] == playerO &&  Matrix[1][1] == playerO && Matrix[2][1] == playerO )
        return playerO;

        if ( Matrix[0][2] == playerO &&  Matrix[1][2] == playerO && Matrix[2][2] == playerO )
        return playerO;

        return '/' ;
     }

 void TicTac :: start_TheGame()
     {
        while (true)
            {
                drawTheGame();

                Player1();

                drawTheGame();

                statusValidation();

                Player2(); 

                statusValidation();
            }
     }