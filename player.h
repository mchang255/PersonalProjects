/* PIC10A Battle with Voldemort
 * Coded by Weiqi Chu
 */

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include<string>
#include<iostream>
#include<assert.h>
using namespace std;

class player
{
    public:
        // constructors with different parameter lists
        player();
        player(string myname);
        player(string myname, int mystamina, int mybattles);
       
        // retrive private data members
        string get_name() const;
        int get_stamina() const;
        int get_n_battles() const;

        // reset stamina/n_battles by passing a parameter
        void set_stamina(int i);
        void set_n_battles(int n);
      
        // add 1 to the private member win
        void add_win();

        /* this function mimics the process of having one battle and returns true if the player wins the battle
         * See homework instructions for details.
         */
        bool battle(player& x);
        
        /* determin if the object wins more battles than player x
         * @params: player x
         * @return true if the object wins more or equal battles than the player x
         */
        bool operator>(player x) const;

    private:
        string name;
        int stamina;
        int n_battles;
        int win;
};


#endif
