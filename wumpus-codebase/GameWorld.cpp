//
//  GameWorld.cpp
//  PA3-122-Real
//
//  Created by Mitchell Kolb on 6/3/20.
//  Copyright © 2020 Mitchell Kolb. All rights reserved.
//

#include "GameWorld.h"

//Class Based Function Definitions
void GameWorld::displayEntireWorld()
{
    //Subtracts the points
    points = (points - 5);
    //Used nested for loops to cycle through the char array and prints the spaces on the board.
    cout << " --- --- --- --- ---\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << "| " << map[i][j] << " ";
        }
        cout << "|\n";
        cout << " --- --- --- --- ---\n";
    }
}

void GameWorld::displayVisibleWorld()
{
    //Subtracts the points
    points = (points - 2);
    //Uses the user position that was saved in the constructor and prints the 8 spaces around the user and blanks for everywhere else on the board
    cout << endl << " --- --- --- --- ---\n";
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (i == (user[0] - 1))
            {
                if (j == (user[1] - 1))
                {cout << "| " << map[i][j] << " ";}
                else if (j == user[1])
                {cout << "| " << map[i][j] << " ";}
                else if (j == (user[1] + 1))
                {cout << "| " << map[i][j] << " ";}
                else
                    cout << "|   ";
            }
            else if (i == user[0])
            {
                if (j == (user[1] - 1))
                {cout << "| " << map[i][j] << " ";}
                else if (j == user[1])
                {cout << "| " << map[i][j] << " ";}
                else if (j == (user[1] + 1))
                {cout << "| " << map[i][j] << " ";}
                else
                    cout << "|   ";
            }
            else if (i == (user[0] + 1))
            {
                if (j == (user[1] - 1))
                {cout << "| " << map[i][j] << " ";}
                else if (j == user[1])
                {cout << "| " << map[i][j] << " ";}
                else if (j == (user[1] + 1))
                {cout << "| " << map[i][j] << " ";}
                else
                    cout << "|   ";
            }
            else
                cout << "|   ";
        }
        cout << "|\n" << " --- --- --- --- ---\n";
    }
}

//If I'm ajusting the users position I have to change the place on the map[][] and the user[] becuase they are used to display but I can't change user first because It's the only way I have access to the user

void GameWorld::moveUp()
{
    if(user[0] != 0)
    {
        //Adds the points
        points = (points + 5);
        //Saves the contents of the soon to be new 'U' spot so I can check it later in haveIWon and amIAlive.
        newSpot = map[(user[0] - 1)][user[1]];
        //Adds the 'U' to the new space
        map[(user[0] - 1)][user[1]] = map[user[0]][user[1]];
        //Changes the old 'U' spot to a ' '
        map[user[0]][user[1]] = ' ';
        //Changes user[] so the display will work
        user[0] = (user[0] - 1);
    }
    else
        cout << "Can't move up when you're at the top\n";
}

void GameWorld::moveDown()
{
    if(user[0] != 4)
    {
        //Adds the points
        points = (points + 5);
        //Saves the contents of the soon to be new 'U' spot so I can check it later in haveIWon and amIAlive.
        newSpot = map[(user[0] + 1)][user[1]];
        //Adds the 'U' to the new space
        map[(user[0] + 1)][user[1]] = map[user[0]][user[1]];
        //Changes the old 'U' spot to a ' '
        map[user[0]][user[1]] = ' ';
        //Changes user[] so the display will work
        user[0] = (user[0] + 1);
    }
    else
        cout << "Can't move down when you're at the bottom\n";
}

void GameWorld::moveRight()
{
    if(user[1] != 4)
    {
        //Adds the points
        points = (points + 5);
        //Saves the contents of the soon to be new 'U' spot so I can check it later in haveIWon and amIAlive.
        newSpot = map[user[0]][(user[1] + 1)];
        //Adds the 'U' to the new space
        map[user[0]][(user[1] + 1)] = map[user[0]][user[1]];
        //Changes the old 'U' spot to a ' '
        map[user[0]][user[1]] = ' ';
        //Changes user[] so the display will work
        user[1] = (user[1] + 1);
    }
    else
        cout << "Can't move right when you're at the right wall\n";
}

void GameWorld::moveLeft()
{
    if(user[1] != 0)
    {
        //Adds the points
        points = (points + 5);
        //Saves the contents of the soon to be new 'U' spot so I can check it later in haveIWon and amIAlive.
        newSpot = map[user[0]][(user[1] - 1)];
        //Adds the 'U' to the new space
        map[user[0]][(user[1] - 1)] = map[user[0]][user[1]];
        //Changes the old 'U' spot to a ' '
        map[user[0]][user[1]] = ' ';
        //Changes user[] so the display will work
        user[1] = (user[1] - 1);
    }
    else
        cout << "Can't move left when you're at the left wall\n";
}

bool GameWorld::haveIWon()
{
    //Returns true is the user has won
    if (newSpot == 'G')
    {
        winORloss = 1;
        return true;
        
    }
    else
        return false;
}

bool GameWorld::amIAlive()
{
    //Returns true if the user is alive which means that they haven't hit a pit or wumpus yet.
    if(newSpot == 'P')
    {
        winORloss = 2;
        return false;
    }
    else if(newSpot == 'W')
    {
        winORloss = 2;
        return false;
    }
    else
        return true;
}

void GameWorld::displayControls()
{
    cout << "\n\tControls: Up, Down, Left, Right\n\t                I\n\t              J K L\n\t V - Display Visable World (-2 Points)\n\t C - Display Entire World (-5 Points)\n\t R - Restart Game With Same Map\n\t N - Restart Game With New Map\n\t Q - Quit Game\n";
}

int GameWorld::getwinORloss()
{return winORloss;}

void GameWorld::setwinORloss()
{winORloss = 3;}

int GameWorld::getPoints()
{return points;}

//Regular Function Definitions
