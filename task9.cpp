#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;
int main()
{
    srand((unsigned int) time(NULL));

    int player_throw =0;
    int ai_throw=0;
    bool draw = false;

    do
    {
        cout<<" Select your throw ."<<endl<<" 1) Rock "<<endl<<"2)Paper "<<endl<<" 3) Scissors "<<endl<<" Selection :";
        cin>>player_throw;
        cout<<endl;

        ai_throw= (rand()%3)+1;
        if (ai_throw== ROCK)
        {
            cout<<" AI throws ROCK ."<<endl;
        }
        else if(ai_throw== PAPER)
        {
            cout<< "AI throws PAPER ."<<endl;
        }
        else if(ai_throw==SCISSORS)
        {
            cout<< "AI throws SCISSORS ."<<endl;
        }

        draw = false;
        if(player_throw== ai_throw)
        {
            draw = true;
            cout<<"Draw ! Play again !"<<endl;
        }
        else if(player_throw== ROCK && ai_throw == SCISSORS)
        {
            cout<<" ROCK Beats SCISSORS ! YOU Win"<<endl;
        }
        else if(player_throw==ROCK && ai_throw==PAPER)
        {
            cout<<" PAPER Beats ROCK ! YOU Lose."<<endl;
        }
        else if(player_throw==PAPER && ai_throw==ROCK)
        {
            cout<<" PAPER Beats ROCK ! YOU Win."<<endl;
        }
        else if(player_throw==PAPER && ai_throw==SCISSORS)
        {
            cout<<" SCISSORS Beats PAPER ! YOU Lose."<<endl;
        }
        else if(player_throw==SCISSORS && ai_throw==PAPER)
        {
            cout<<" SCISSORS Beats PAPER ! YOU Win."<<endl;
        }
        else if(player_throw==SCISSORS && ai_throw==ROCK)
        {
            cout<<" ROCK Beats SCISSORS ! YOU Lose."<<endl;
        }

        cout<<endl;
    } while (draw);
    
}