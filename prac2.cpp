#include <iostream>
#include <ctime>

using namespace std;

int random, player_score = 0, enemy_score= 0, tie_score = 0;

void game_mechanics(char player, int enemy);

int main(){
    char choice;
    while(true){
        cout << "Enter rock/paper/scissors (r/p/s) or to exit(q) : "; cin >> choice;
        if(choice == 'q' || choice == 'Q'){
            cout << "\n\nScrore Board: " << "\n\t Player Score: " << player_score << "\n\t Enemy Score: " << enemy_score <<endl;
            cout << "exiting the game..." << endl;
            break;
        }
        else{
            srand(time(NULL)); // seed the random number generator
            random = rand() % 3 + 1; // generate a random number between 1 and 3 
            game_mechanics(choice, random);
        }
    }
}

void game_mechanics(char player, int enemy){
    if(player == 'r' || player == 'R'){ // player chose rock
        cout << "You chose rock" << endl;
        if(enemy == 1){
            cout << "enemy chose rock" << endl;
            cout << "It's a tie!" << endl;
            tie_score++;
        }
        else if(enemy == 2){
            cout << "Enemy chose paper" << endl;
            cout << "You lose!" << endl;
            enemy_score++;
        }
        else if(enemy == 3){
            cout << "Enemy chose scissors" << endl;
            cout << "You win!" << endl;
            player_score++;
        }
    }
    if(player == 'p' || player == 'P'){ // player chose paper
        cout << "You chose paper" << endl;
        if(enemy == 1){
            cout << "enemy chose rock" << endl;
            cout << "You win!" << endl;
            player_score++;
        }
        else if(enemy == 2){
            cout << "Enemy chose paper" << endl;
            cout << "It's a tie!" << endl;
            tie_score++;
            
        }
        else if(enemy == 3){
            cout << "Enemy chose scissors" << endl;
            cout << "You lose!" << endl;
            enemy_score++;
        }
    }
    if(player == 's' || player == 'S'){ // player chose scissors
        cout << "You chose scissors" << endl;
        if(enemy == 1){
            cout << "enemy chose rock" << endl;
            cout << "You lose!" << endl;
            enemy_score++;
        }
        else if(enemy == 2){
            cout << "Enemy chose paper" << endl;
            cout << "You win!" << endl;
            player_score++;
        }
        else if(enemy == 3){
            cout << "Enemy chose scissors" << endl;
            cout << "It's a tie!" << endl;
            tie_score++;
        }
    }
}