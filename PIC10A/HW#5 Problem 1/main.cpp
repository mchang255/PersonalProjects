/* PIC10A Battle with Voldemort
 * Coded by Weiqi Chu
 */
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"player.h"

using namespace std;

int main()
{
    srand(time(0));
    // set total stamina and number of battles
    int total_stamina = 100;
    int n_battles = 3;
    
    // initialize two players: Hermione and Voldemort
    // User will play as Hermione and computer will play as Voldemort
    player Hermione("Hermione Granger", total_stamina, n_battles);
    player Voldemort("Lord Voldemort");
    Voldemort.set_stamina(Hermione.get_stamina());
    Voldemort.set_n_battles(Hermione.get_n_battles());

    for (int i=n_battles; i>0; i--)
    {
        if (Hermione.battle(Voldemort))
            Hermione.add_win();
        else
            Voldemort.add_win();
    }
    if ( Hermione > Voldemort )
        cout << "Gryffindor rocks!\n";
    else if ( Voldemort > Hermione)
        cout << "You-know-who is back!\n";
    else
        cout << "Tie for now!\n";
    return 0;
}
