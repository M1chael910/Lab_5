/*
 * Michael Murphy
 * 1/23/23
 * Week 7 Lab 5 TTT Win
 * Tic-Tac-Toe project
 * Objective: Objective: To use loops, functions, and arrays
 * to produce user input into the game.
 *
 */


#include <iostream>
#include "iomanip"

using namespace std;

char squares[9] = {'1','2','3','4','5',
                   '6','7','8','9'};
//char choice = ' ';
void display();
void playerChoice(int player);
void win();

int main() {
    cout << "Michael Murphy - 2/26/23\n";
    cout << "Week 4 Lab Player choice function for TicTacToe\n";
    cout << "Objective: To use loops, functions, and arrays to "
            "produce user input into the game and produce a winner.\n";
    display();
    win();
    playerChoice(1);
    display();
    win();
    playerChoice(2);
    display();
    win();
    playerChoice(1);
    display();
    win();
    playerChoice(2);
    display();
    win();
    playerChoice(1);
    display();
    win();
    playerChoice(2);
    display();
    win();
    playerChoice(1);
    display();
    win();
    playerChoice(2);
    display();
    win();
    playerChoice(1);
    display();
    win();
    return 0;
}

void win() {
    for (int square = 0; square <= 8; ++square) {
        if (squares[square] == squares[square + 1] &&
            squares[square + 1] == squares[square + 2]) {
            if (squares[square] == 'X') {
                cout << "O has won horizontally\n";
                cout << "on square " << squares[square] << endl;
            } else if (squares[square] == 'O') {
                cout << "O has won horizontally\n";
                cout << "on square " << squares[square] << endl;
            }
        } else if (squares[square] == squares[square + 3] &&
                   squares[square + 3] == squares[square + 6]) {
            {
                if (squares[square] == 'X') {
                    cout << "X has won vertically\n";
                } else if (squares[square] == 'O') {
                    cout << "X has won vertically\n";
                }
            }
        } else if (squares[square] == squares[square + 5] &&
                   squares[square + 3] == squares[square + 6]) {
            {
                if (squares[square] == 'X') {
                    cout << "X has won vertically\n";
                } else if (squares[square] == 'O') {
                    cout << "X has won vertically\n";
                }
            }
        }
    }
void display() {
    cout << "\n\n\n" << squares[0];
    cout << std::setw(6);
    cout << squares[1];
    cout << std::setw(6);
    cout << squares[2];
    cout << "\n\n\n"<< squares[3];
    cout << std::setw(6);
    cout << squares[4];
    cout << std::setw(6);
    cout << squares[5];
    cout << std::setw(6);
    cout << "\n\n\n"<< squares[6];
    cout << std::setw(6);
    cout << squares[7];
    cout << std::setw(6);
    cout << squares[8] << endl;
    cout << std::setw(6);
}


void playerChoice(int player) {
    char chosenValue = 'x';
    repeat:
    cout << "Please make a choice 1-9" << endl;
    cin >> chosenValue;

    switch (chosenValue) {
        case '1':
            if (squares[0] == 'X' || squares[0] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[0] = 'X';
                } else {
                    squares[0] = 'O';
                }
                break;
            }
        case '2':
            if (squares[1] == 'X' || squares[1] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[1] = 'X';
                } else {
                    squares[1] = 'O';
                }
                break;
            }
        case '3':
            if (squares[2] == 'X' || squares[2] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[2] = 'X';
                } else {
                    squares[2] = 'O';
                }
                break;
            }
        case '4':
            if (squares[3] == 'X' || squares[3] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[3] = 'X';
                } else {
                    squares[3] = 'O';
                }
                break;
            }
        case '5':
            if (squares[4] == 'X' || squares[4] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[4] = 'X';
                } else {
                    squares[4] = 'O';
                }
                break;
            }

        case '6':
            if (squares[5] == 'X' || squares[5] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[5] = 'X';
                } else {
                    squares[5] = 'O';
                }
                break;
            }
        case '7':
            if (squares[6] == 'X' || squares[6] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[6] = 'X';
                } else {
                    squares[6] = 'O';
                }
                break;
            }
        case '8':
            if (squares[7] == 'X' || squares[7] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[7] = 'X';
                } else {
                    squares[7] = 'O';
                }
                break;
            }
        case '9':
            if (squares[8] == 'X' || squares[8] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[8] = 'X';
                } else {
                    squares[8] = 'O';
                }
                break;
            }
        default:
            cout << "Please enter another number" << endl;
            goto repeat;
    }
}




//
//void playerChoice(int player) {
//    char chosenValue = 'x';
//    while (true) {
//        cout << "Please make a choice 1-9" << endl;
//        cin >> chosenValue;
//
//
//        switch (chosenValue) {
//            case '1':
//                if (squares[0] != 'X' && squares[0] != 'O'){
//                    if (player == 1) {
//                        squares[0] = 'X';
//                        break;
//                    } else {
//                        squares[0] = 'O';
//                        break;
//                    }
//                }
//            case '2':
//                if (squares[1] != 'X' && squares[1] != 'O'){
//                    if (player == 1) {
//                        squares[1] = 'X';
//                        break;
//                    } else {
//                        squares[1] = 'O';
//                        break;
//                    }
//                }
//            case '3':
//                if (squares[2] != 'X' && squares[2] != 'O'){
//                    if (player == 1) {
//                        squares[2] = 'X';
//                        break;
//                    } else {
//                        squares[2] = 'O';
//                        break;
//                    }
//                }
//            case '4':
//                if (squares[3] != 'X' && squares[3] != 'O'){
//                    if (player == 1) {
//                        squares[3] = 'X';
//                        break;
//                    } else {
//                        squares[3] = 'O';
//                        break;
//                    }
//                }
//            case '5':
//                if (squares[4] != 'X' && squares[4] != 'O'){
//                    if (player == 1) {
//                        squares[4] = 'X';
//                        break;
//                    } else {
//                        squares[4] = 'O';
//                        break;
//                    }
//                }
//
//            case '6':
//                if (squares[5] != 'X' && squares[5] != 'O'){
//                    if (player == 1) {
//                        squares[5] = 'X';
//                        break;
//                    } else {
//                        squares[5] = 'O';
//                        break;
//                    }
//                }
//            case '7':
//                if (squares[6] != 'X' && squares[6] != 'O'){
//                    if (player == 1) {
//                        squares[6] = 'X';
//                        break;
//                    } else {
//                        squares[6] = 'O';
//                        break;
//                    }
//                }
//            case '8':
//                if (squares[7] != 'X' && squares[7] != 'O'){
//                    if (player == 1) {
//                        squares[7] = 'X';
//                        break;
//                    } else {
//                        squares[7] = 'O';
//                        break;
//                    }
//                }
//            case '9':
//                if (squares[8] != 'X' && squares[8] != 'O'){
//                    if (player == 1) {
//                        squares[8] = 'X';
//                        break;
//                    } else {
//                        squares[8] = 'O';
//                        break;
//                    }
//                }
//            default:
//                cout << "Invalid choice" << endl;
//                return;
//        }
//    }
//    }






