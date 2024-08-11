//
//  GameWorld.h
//  PA3-122-Real
//
//  Created by Mitchell Kolb on 6/3/20.
//  Copyright © 2020 Mitchell Kolb. All rights reserved.
//

#ifndef GAMEWORLD_H
#define GAMEWORLD_H


#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Gameworld Class Prototype (I think thats the right word for it)
class GameWorld
{
private:
    char map[5][5];
    int user[2];//[0] and [1] used for user position.
    char newSpot;
    int winORloss;
    int points;
    
    //W = Wumpus, P = Pit, U = User, G = Gold
public:
        //Constructor
    GameWorld()
    {
        winORloss = 0;
        points = 0;
        //Makes all 25 spaces on the board NULL
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                map[i][j] = ' ';
            }
        }
        //Assigns the 4 map quantities randomly
        srand((unsigned int)time(0));
        int x = rand()%5, y = rand()%5;
        map[x][y] = 'U';
        user[0] = x;
        user[1] = y;
        //Assigns the Gold and Wumpus and 5 Pits
        int type = 0;//Used for type
        int stopper = 0;//Used to stop asignment after its added cause the rand could produce cordinates on top of a space that is already ocupied by non ' '.
        for(int i = 0; i < 7; i++)
        {
            while (stopper == 0)
            {
                x = rand()%5;
                y = rand()%5;
                if (map[x][y] == ' ')
                {
                    if (type == 0)
                    {
                        //Gold
                        map[x][y] = 'G';
                        type++;
                    }
                    else if (type == 1)
                    {
                        //Wumpus
                        map[x][y] = 'W';
                        type++;
                    }
                    else if (type > 1 && type < 7)
                    {
                        //Pit
                        map[x][y] = 'P';
                        //Stops the loop
                        if (type == 6)
                        {
                            stopper++;
                        }
                        else
                            type++;
                    }
                    else
                        break;
                }
            }
        }
    }
    
        //Public Member Functions
    void displayEntireWorld();
    void displayVisibleWorld();
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    bool haveIWon();
    bool amIAlive();
    void displayControls();
    int getwinORloss();
    void setwinORloss();
    int getPoints();
    
        //Destructor
};

//Regular Function Prototypes




#endif /* GameWorld_h */
