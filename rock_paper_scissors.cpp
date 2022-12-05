#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Ur choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    
    return 0;
}

char getUserChoice(){
    char player;
    do{
    std::cout<<"Rock-Paper-Scissors\n";
    std::cout<<"*******************\n";
    std::cout<<"r or p or s\n";
    std::cin>>player;
    }while (player!='r' && player!='p' && player!='s');
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    char computer;
    int num = rand()%3 +1;
    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return computer;
}   
void showChoice(char choice){
    switch(choice) {
        case 'r': std::cout<< "Rock\n";
                    break;
        case 'p': std::cout<< "Paper\n";
                    break;
        case 's': std::cout<< "Scissors\n";
                    break;
        default: std::cout<< "Invalid choice!\n\n";
                    break;
    }
    
}
void chooseWinner(char player, char computer){
    switch (player) {
        case 'r': if (computer == 'r') {
                    std::cout<< "Tie!\n";}   
                  else if (computer == 'p') {
                    std::cout<< "You lose!\n";}
                  else {std::cout<< "You win!\n";}

                  break;
        
        case 'p': if (computer == 'p') {
                    std::cout<< "Tie!\n";}   
                  else if (computer == 's') {
                    std::cout<< "You lose!\n";}
                  else {std::cout<< "You win!\n";}

                  break;
        
        case 's': if (computer == 's') {
                    std::cout<< "Tie!\n";}   
                  else if (computer == 'r') {
                    std::cout<< "You lose!\n";}
                  else {std::cout<< "You win!\n";}  

                  break;        
    }   
}