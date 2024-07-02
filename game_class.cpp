#include <iostream>
#include <string>
using namespace std;

class Board
{
public:
    void printBoard()
    {
        for (int i = 0; i <= 2; i++)
        {
            cout << board[i] << endl << "--- --- ---" << endl;
        }
    };

    void makeMove(int player_turn, int move){
        char marker = 'O';
        if (player_turn % 2 == 1) {
            char marker = 'X';
        }

        move = move - 1;
        int col = move % 3;
        int row = move/3;

        // cout << row << " " << col*3 + 2 << endl;
        // char *entry = board[row];
        // entry = entry.replace(col*3 + 2, 1, marker);
        printBoard();
    }
private:
    char *board[3]= {" 1 | 2 | 3", " 4 | 5 | 6", " 7 | 8 | 9"};
};

class Game
{
public:
    Game()
    {
        cout << "welcome to tic tac toe\n";
        cout << "----------------------\n";

        string p1;
        string p2;
        cout << "Enter Player 1's name (X): ";
        cin >> p1;
        cout << "Enter Player 2's name (O): ";
        cin >> p2;

        player1 = p1;
        player2 = p2;
        player_turn = 1;

        board.printBoard();
        
        int move;
        for (int i = 0; i <= 8; i++){
            cout << "Enter a number 1-9: ";
            cin >> move;
            player_turn = player_turn + i;
            board.makeMove(player_turn, move);
            // board.printBoard();
        };
    };

private:
    string player1;
    string player2;
    Board board;
    int player_turn;
};

int main()
{
    Game();
    return 0;
};
