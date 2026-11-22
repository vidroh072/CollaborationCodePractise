#include <iostream>
#include <ctime>
using namespace std ;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player,char computer);

int main(){
    char player;
    char computer;

    player=getUserChoice();
    cout<<"Your Choice is : ";
    showChoice(player);
    computer=getComputerChoice();
    cout<<"Computer choice is :";
    showChoice(computer);

    chooseWinner(player, computer);
}
char getUserChoice(){
    char player;
    cout<<"*****************************\n";
    cout<<" Rock, Paper, Scissors Game\n";
    do{
        cout<<" Choose one of the following\n";
        cout<<"'r' for Rock\n";
        cout<<"'p' for Paper\n";
        cout<<"'s' for Scissors\n";
        cin>>player;
        cout<<"*****************************\n";
    }while(player !='r'&& player != 'p' && player != 's');
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    char computer;
    int num=(rand()%3)+1;
    switch(num){
        case 1 : return 'r';
        break ;
        case 2 : return 'p';
        break;
        case 3: return 's';
        break;
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r': cout<<"Rock\n";
        break ;
        case 'p': cout<<"Papper\n";
        break ;
        case 's': cout<<"Scissors\n";
        break;
    }
}
void chooseWinner(char player,char computer){
    switch(player){
        case 'r' : if(computer=='r'){
            cout<<"It's a tie";
        }else if(computer=='p'){
            cout<<"You Lost";
        }else{
            cout<<"You Win";
        }break;
        case 'p' : if(computer=='p'){
            cout<<"It's a tie";
        }else if(computer=='s'){
            cout<<"You Lost";
        }else{
            cout<<"You Win";
        }break;
        case 's' : if(computer=='s'){
            cout<<"It's a tie";
        }else if(computer=='r'){
            cout<<"You Lost";
        }else{
            cout<<"You Win";
        }break;
    }
}