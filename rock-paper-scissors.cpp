// Online C++ compiler to run C++ program online
#include <iostream>


using namespace std;

// function declaration

char getuserchoice( );
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player , char computer);

int main() {
    char player;
    char computer;
    
    player = getuserchoice();
    cout << "you choice : ";
    showchoice(player);

    computer = getcomputerchoice();
    cout << "computer's choice:  ";
    showchoice(computer);

    choosewinner(player , computer );



    return 0;
}


// function define
char getuserchoice(){
    char player;
    
    do{
        
        cout << "choose one fo the following \n";
        cout << ".......... \n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cout << "enter one of the ablove character : " ;
        // cout << "********\n";


       
        cin >> player;
    
    
    }while(player !='r' && player != 'p' && player != 's');
    
    
    return player;
    
}
char getcomputerchoice(){

    int num = rand()%3 + 1;

    switch (num)
    {
    case 1: return 'r';

        break;
    case 2: return 'p';
    
        break;
    case 3: return 's';
    
        break;
    }
    return 0;
    
}
void showchoice(char choice){
    switch (choice)
    {
    case 'r' : cout << "rock \n";
        break;
    case 'p' : cout << "paper \n";
        break;
    case 's' : cout << "scisoors \n";
        break;
    }
}
void choosewinner(char player , char computer){
    switch ((player ))
    {
    case 'r': if (computer =='r'){
        cout << "its tie\n";

    }
    else if(computer == 'p'){
        cout << "you lose \n";

    }
    else{
        cout << "you won \n";

    }
        break;

    case 'p': if (computer =='r'){
        cout << "you won\n";

    }
    else if(computer == 'p'){
        cout << "its tie \n";

    }
    else{
        cout << "you lose \n";
        
    }
    break;
    case 's': if (computer =='r'){
        cout << "you lose\n";

    }
    else if(computer == 'p'){
        cout << "you won \n";

    }
    else{
        cout << "its tie\n";
        
    }
    break;
    }
}