/*  Homework #5 Problem 1
    Goal: Writing the implementations for the class player which is to be used in the main.cpp. The implementations involve setting the name, number of battles, amount of stamina, and number of wins for each player, creating the battles, and determining the winner.
 
    Author: Miranda Chang
    Date: 05/16/20
 */

#include"player.h"

/*
 Default constructor that creates object in player class. Name is "MyPlayer" with stamina, number of battles, and number of wins set to zero.
 */
player::player()
{
    name = "MyPlayer";
    stamina = 0;
    n_battles = 0;
    win = 0;
}

/*
 Creates object in player class
 @param myname name of player
 */
player::player(string myname)
{
    name = myname;
    stamina = 0;
    n_battles = 0;
    win = 0;
}

/*
 Creates object in player class
 @param myname name of player
 @param mystamina stamina of player
 @param mybattles number of battles
 */
player::player(string myname, int mystamina, int mybattles)
{
    name = myname;
    stamina = mystamina;
    n_battles = mybattles;
    win = 0;
}

/*
 Gets name of player
 @return name of player
 */
string player::get_name() const
{
    return name;
}

/*
 Gets stamina of player
 @return stamina of player
 */
int player::get_stamina() const
{
    return stamina;
}

/*
 Gets number of battles chosen
 @return number of battles
 */
int player::get_n_battles() const
{
    return n_battles;
}

/*
 Sets stamina
 @param i stamina that player will have
 */
void player::set_stamina(int i)
{
    stamina = i;
    
}

/*
 Sets number of battles
 @param n number of battles that the players will undergo
 */
void player::set_n_battles(int n)
{
    n_battles = n;
}

/*
 Adds win to player who won a battle
 */
void player::add_win()
{
    win++;
}

/*
 Battling the enemy by selecting stamina values and comparing them to see who has the bigger value. How the winner is determined.
 @param enemy who the player is battling
 @return true if player wins the battle
 @return false if enemy wins the battle
 */
bool player::battle(player& enemy)
{
    cout << "There are " << n_battles << " more battles left." << endl;
    cout << "You have " << stamina << " stamina values left." << endl;
    cout << "How many stamina values do you want to use? ";
    int player_stamina; //variable represents how much stamina the player would like to use
    cin >> player_stamina; //inputting stamina
    
    int enemy_stamina; //variable represents how much stamina the enemy will use
    enemy_stamina = rand() % (enemy.stamina + 1); //randomly selected
    
    if(n_battles == 1) //if the number of battles left is one
    {
        enemy_stamina = enemy.stamina; //enemy will use up remaining stamina
    }
    
    cout << enemy.name << " chose to use " << enemy_stamina << " stamina values." << endl;
    
    
    stamina -= player_stamina; //updating stamina after each round
    enemy.stamina -= enemy_stamina;
    
    n_battles--; //decreasing numberr of battles after each round
    
    
    if(player_stamina >= enemy_stamina) //if player's stamina is higher than enemy's, then function returns true
    {
        cout << name << " wins!" << endl;
        cout << "********************************************" << endl;
        return true;
    }
    else
    {
        cout << enemy.name << " wins!" << endl;
        cout << "********************************************" << endl;
        return false;
    }
    
    
}

/*
 overloading of operator>
 @param player x
 @return true if the player wins more or equal to battles than the player x
 */
bool player::operator>(player x) const
{
    if (win >= x.win)
    {
        return true;
    }
    else
    {
        return false;
    }
}
