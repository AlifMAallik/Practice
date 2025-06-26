#include <iostream>
#include <ctime>

using namespace std;

void _playerBoard(char *spaces);
void _player(char *spaces , char player);
void _computer(char *spaces, char computer);
bool _winner(char *spaces, char player, char computer);

int main(){
   char spaces[9] = {' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool _game_running  = true;

    _playerBoard(spaces);
    

    while(_game_running == true){
        _player(spaces, player);
        _playerBoard(spaces);
        if(_winner(spaces,player,computer)){
            _game_running == false;
            break;
        }
        _computer(spaces, computer);
        _playerBoard(spaces);
        if(_winner(spaces,player,computer)){
            _game_running == false;
            break;
        }
    }

}

void _playerBoard(char *spaces){
    cout << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   " << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   " << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   " << "\n";

    
}
void _player(char *spaces , char player){
    int x;
    do{
        cout << "Enter your move(1-9): "; cin >> x;
        x--;
        if (x >= 0 && x < 9) {
            if (spaces[x] == ' ') {
            spaces[x] = player;
            break;  
        } else {
            cout << "Space already occupied!!\n";
        }
    }
        else {
        cout << "Invalid input! Please enter a number between 1 and 9.\n";
        }
    }while(true);
    
    
}
void _computer(char *spaces, char computer){
    srand(time(NULL));
    do
    {
       int y = rand() % 9;
       if(spaces[y] == ' '){
        spaces[y] = computer;
        break;
       }
    } while (true);
    

}
bool _winner(char *spaces, char player, char computer){
   //rows
   for(int i = 0; i<=6; i+=3){
        if (spaces[i] != ' ' &&
        spaces[i] == spaces[i + 1] &&
        spaces[i + 1] == spaces[i + 2]) {
        cout << "Winner is: " << spaces[i];
        return true;
        }
   }
   //columns
   for(int i = 0; i<3; i++){
        if (spaces[i] != ' ' &&
        spaces[i] == spaces[i + 3] &&
        spaces[i + 3] == spaces[i + 6]) {
        cout << "Winner is: " << spaces[i];
        return true;
        }
   }
   //Diagonals
   if (spaces[0] != ' ' &&
        spaces[0] == spaces[4] &&
        spaces[4] == spaces[8]) {
        cout << "Winner is: " << spaces[0];
        return true;
        }
    //Opp-Diagonal
    if (spaces[2] != ' ' &&
        spaces[2] == spaces[4] &&
        spaces[4] == spaces[6]) {
        cout << "Winner is: " << spaces[2];
        return true;
        }
   return false;
}
