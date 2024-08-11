//
//  main.cpp
//  PA3-122-Real
//
//  Created by Mitchell Kolb on 6/3/20.
//  Copyright © 2020 Mitchell Kolb. All rights reserved.
//
#include "GameWorld.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;


int main() {
    
    ofstream outfile;
    outfile.open("results.txt");
    
    cout << "A new Wumpus game has been created. " << endl;
    GameWorld real;

    while (real.getwinORloss() == 0)
    {
        real.displayControls();
        char move = ' ';
        cout << "\n\tEnter Your Move:";
        cin >> move;
        //Controls
        if (move == 'i' || move == 'I')
        {real.moveUp();}
        else if (move == 'k' || move == 'K')
        {real.moveDown();}
        else if (move == 'j' || move == 'J')
        {real.moveLeft();}
        else if (move == 'l' || move == 'L')
        {real.moveRight();}
        //Other menu stuff
        else if (move == 'v' || move == 'V')
        {real.displayVisibleWorld();}
        else if (move == 'c' || move == 'C')
        {real.displayEntireWorld();}
        else if (move == 'r' || move == 'R')
        {cout << "ok R\n";}
        else if (move == 'n' || move == 'N')
        {
            real.setwinORloss();
            main();
        }
        else if (move == 'q' || move == 'Q')
        {break;}
        else
            cout << "Please Enter a Valid input\n";
        real.haveIWon();
        real.amIAlive();
    }
    
    if (real.getwinORloss() == 1)
    {
        cout << "You have reached the gold! You won the game!\n";
    }
    else if (real.getwinORloss() == 2)
    {
        cout << "You have lost the game. Maybe next time\n";
    }
    else
        cout << "Goodbye\n";
    
    cout << "Points have been sent to the results.txt file.\n";
    outfile << "Points: " << real.getPoints();
    outfile.close();
    
    return 0;
}
