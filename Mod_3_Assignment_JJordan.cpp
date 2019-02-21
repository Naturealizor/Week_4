// Jacob Jordan 
// IN200-12850 C++
// Created 2/10/19

#include <iostream>
#include <string> //Not sure if this is needed
using namespace std;

int main() {

	//Creating the array
	const int MAX_INV = 10;
	string playerInv[MAX_INV];

	string input;
	int currItems = 0;
	playerInv[currItems++] = "sword";
	playerInv[currItems++] = "staff";
	playerInv[currItems++] = "bow";
    int i;

    cout << "Ahh we meet again adventurer! \nAlways a pleasure to have ye along for a bit of shananigans. \nFor this assignment, we're going to have ye do a little quest for Manannan mac Lir if you're feeling up to it.\nType in 'y' if ye are.\n" << endl;

    cin >> input;
    if (input == "y"){

        cout << "\nAhh grand! Ok here's what you'll need to do...Wait a minute, is that Aengus Og behind you?? \nGods below it sure looks like it! Better get ready for a fight lad. \nWhat attack would you prefer to use?\n" << endl;

        for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
        }
        cin >> input;

    if (input == "sword") {

        cout << "\nWow, you're not half bad with that sword it seems. Looks like Aengus Og was a wee bit unprepared for a decent fight, he even dropped his sword! By right of conquest it belongs to you now!\nWhat would you like to name it? Make sure to only use one word.\n" << endl;

    } else if (input == "staff") {

        cout << "\nThat...was a pretty big fireball lad. I didn't know you had it in you honestly, have you been training with Briet? Well nevermind that, by right of conquest it belongs to you now!\nWhat would you like to name it? Make sure to only use one word.\n " << endl;

    } else if (input == "bow") {

        cout << "\nWell I'll be a son of a goat, that was a headshot! It's not going to take him down for good, but it sure looked like it gave him quite the scare. He even dropped his sword! By right of conquest it belongs to you now!\nWhat would you like to name it? Make sure to only use one word.\n" << endl;

    }

    cin >> input;
    playerInv[currItems++] = input;

    cout << "\nCongratz! You've stored " << playerInv[3] << " in your inventory. Here's your items currently.\n" << endl;

        for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
        }

    cout << "\nThat was quite the start to our quest I'd say! And would you look at that, looks like there's a hidden chest off the path over there!" << " You walk over to the chest and open it finding a new staff and bow! \nWhat would you like to name these items? Make sure to only use one word.\n" << endl;

    cin >> input;
    playerInv[currItems++] = input;

    cout << "\nCongratz! You've stored " << playerInv[4] << " in your inventory.\n";
    cout << "\nWhat about the bow?\n";

    cin >> input;
    playerInv[currItems++] = input;

    cout << "\nCongratz! You've stored " << playerInv[4] << " and " << playerInv[5] << " in your inventory. Here's your items currently.\n" << endl;

        for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
        }   
    cout << "\nAlso, here's a health potion for ye. Looks like you could use it after your tussel with Aengus. You may want to go ahead and use that now. Press 'h' to heal up.\n";

    cout << "\nYou receieved a potion from Manannan!\n";
    playerInv[currItems++] = "potion";

    cout << "\nYour items:\n";
    for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
        } 

    cin >> input;   

    while (input != "h") {
        
        cout << "You've gotta heal to first! Type in 'h'";
        cin >> input;
        continue;

    } if (input == "h"){
        playerInv[6].erase();

        cout << "\nAhh much better! You're health is back up to full.\n";

        cout << "\nYour items:\n";
    for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
            }
        }

        cout << "Ahh here we are, the Bridge of Erasing...Unfortunately, you'll have to give up one of your items to pass...Normally we don't feed the trolls, but this time we'll have to.\n" << "\nWhich item number would you like to get rid of? Pick 1, 2, 3, 4, 5, or 6\n";

        cout << "\nYour items:\n";
    for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
            }

        cin >> input;

        if (input == "1")
        {
            playerInv[0].erase();
        }else if (input == "2")
        {
            playerInv[1].erase();
        }else if (input == "3")
        {
            playerInv[2].erase();
        }else if (input == "4")
        {
            playerInv[3].erase(); 
        }else if (input == "5")
        {
            playerInv[4].erase();
        }else if (input == "6")
        {
            playerInv[5].erase();
        }

        cout << "Sorry you had to get rid of that, I know you were quite fond of it. Let's take one more look at what you have in your inventory. \n";

        cout << "\nYour items:\n";
    for (i = 0; i < currItems; ++i){
            cout << playerInv[i] << endl;
            } 

            cout << "For the sake of time, our adventure has come to and end. We'll pick up where we left off next time! Hope you enjoyed!!";
    }
}
/*
    pseudocode for chapter 3 homework assignment

    create an array of strings with a size of 10.
    explain the story to the player, whatever story you wish to tell.
        the player starts with 3 items.
        over the course of several adventures, 
        1.  the player gains 3 items and has to name each of them.
            for example: BunnySword or FlameGuitar
             - because of cin limitations, the name can only be one word.
        2.  the player uses 1 item, making it go away.
        3. at each change in inventory - show the changes with a for loop that ignores strings that have "" no characters.
        
        For the final challenge, the player must give up their most treasured item to the bridge troll (or similar) to get past the bridge.
            The player will have to search for that item inside of a for loop.
*/