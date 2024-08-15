


<h1 align="center">Hunt the Wumpus Game</h1>

<p align="center">
  <img alt="Github top language" src="https://img.shields.io/github/languages/top/mitchellkolb/wumpus?color=DE4830">

  <img alt="Github language count" src="https://img.shields.io/github/languages/count/mitchellkolb/wumpus?color=DE4830">

  <img alt="Repository size" src="https://img.shields.io/github/repo-size/mitchellkolb/wumpus?color=DE4830">

  <img alt="Github stars" src="https://img.shields.io/github/stars/mitchellkolb/wumpus?color=DE4830" />
</p>

<p align="center">
<img
    src="https://img.shields.io/badge/C++-DE4830?style=for-the-badge&logo=c&logoColor=white"
    alt="Website Badge" />
<img
    src="https://img.shields.io/badge/Xcode-000000?style=for-the-badge&logo=apple&logoColor=white"
    alt="Website Badge" />
</p>

This is a C++ implementation of 'Hunt the Wumpus,' a text-based adventure game where players navigate a 5x5 grid, seeking hidden gold while avoiding pits and the dangerous Wumpus. The game highlights object-oriented programming concepts like class design and file operations.

![project image](resources/wumpus-art.jpg)

<details>
<summary style="color:#5087dd">Watch the Full Video Demo Here</summary>

[![Full Video Demo Here](https://img.youtube.com/vi/VidKEY/0.jpg)](https://www.youtube.com/watch?v=VidKEY)

</details>

---


# Table of Contents
- [What I Learned](#what-i-learned-in-this-project)
- [Tools Used / Development Environment](#tools-used--development-environment)
- [Team / Contributors / Teachers](#team--contributors--teachers)
- [How to Set Up](#how-to-set-up)
- [Project Overview](#project-overview)
  - [Project Details](#project-details)
  - [Gameplay](#gameplay)
  - [Files and Structure](#files-and-structure)
  - [Results and Lessons Learned](#results-and-lessons-learned)
  - [Future Work](#future-work)
- [Acknowledgments](#acknowledgments)

---

# What I Learned in this Project
- Implementing and testing classes in C++ 
- Declaring and defining constructors / destructors 
- Understanding the use cases for public and private access specifiers in C++ 
- Apply and implement overloaded functions 
- Apply and implement overloaded operators (stream insertion and stream extraction) 



# Tools Used / Development Environment
- C++
- Xcode
- Terminal
- MacOS





# Team / Contributors / Teachers
- [Mitchell Kolb](https://github.com/mitchellkolb)
- Professor. Nadra Guizani





# How to Set Up
This project was implemented on my macbook using:
- Xcode at the time. Any terminal with gcc installed will work
- Clone this repository 
- Open terminal at the codebase `~.../wumpus/wumpus-codebase/`
- Run the `a.out` that is included or compile your own executable with
```zsh
g++ -o my_program main.cpp GameWorld.cpp
```
- Then use `./a.out` or `./my_program` depending on whatever you named your executable.



# Project Overview
This project utilizes C++ to create a text-based adventure game called "Hunt the Wumpus." I developed this game as part of a programming assignment for a Data Structures course. The game challenges players to navigate a maze, find hidden gold, and avoid deadly hazards like pits and the dreaded Wumpus.

## Project Details
In "Hunt the Wumpus," you play on a 5x5 grid that contains a variety of elements: the player (you), a Wumpus (the enemy), a pot of gold (your reward), and several pits (ranging from 5 to 10). The player starts at a random location and must explore the game world by making strategic moves, all while trying to avoid the Wumpus and pits. The objective is to find the gold without running into any hazards. I implemented features like displaying the entire game world, revealing only adjacent areas, and allowing player movement in four directions.

## Gameplay
The gameplay is straightforward: you control your character using keyboard inputs to move up, down, left, or right. You can also reveal adjacent tiles or display the entire game board if you want to cheat. The game continues until you either find the gold or encounter a Wumpus or a pit, which results in a loss. Points are awarded for each move you survive, but penalties apply if you reveal parts of the game world.

## Files and Structure
- `main.cpp`: This file contains the main game loop, which initializes the game world, handles user inputs, and manages the game state.
- `GameWorld.cpp`: Here, I implemented the `GameWorld` class, which is responsible for the game environment and core functionalities like displaying the world and handling player movements.
- `GameWorld.h`: This header file declares the `GameWorld` class and its methods.


## Results and Lessons Learned
While developing this project, I reinforced my understanding of object-oriented programming concepts such as class design, constructors, destructors, and operator overloading. Implementing a simple game loop gave me valuable experience in managing game state and handling user inputs. I also learned the importance of input validation and file operations in game development.


## Future Work
In the future, I plan to expand the grid size, add more complex hazards or rewards, and introduce different difficulty levels. Additionally, I’m considering enhancing the user interface with graphical elements and developing a more sophisticated AI for the Wumpus to make the game even more engaging.




--- 
# Acknowledgments
This codebase and all supporting materials was made as apart of a course for my undergrad at WSU for CPTS 122 - Data Structures C/C++ in the Summer of 2020. 

