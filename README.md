# Algorithms and Data Structures 

This repository contains my early C++ programming assignments for the college course Algorithms and Data Structures.

## 📁 Project Structure

### starter tasks

Contains the introductory tasks:
- task_1.cpp - first task  
- task_2.cpp - second task  
- task_3.cpp - third task  
- task_4.cpp - fourth task  
- task_5.cpp - fifth task  

### separate compilation
This folder demonstrates separate compilation in C++ and contains:
- main.cpp
- main.o
- func.cpp
- func.o
- program

The program is split into multiple source files:
- One file (main.cpp) contains the main() function  
- Another file (func.cpp) contains the implementation of a separate function  

Steps performed in this task:
- Each .cpp file is compiled into its own object file (`.o`)
- Then all object files are linked into one final executable program

This shows how real multi-file programs are built.

### tasks from 19.11.25
Tasks assigned on 19.11:
- task_01.cpp - first task
- task_02.cpp - second task
- task_03.cpp - third task
- task_06.cpp - sixth task
- task_07.cpp - seventh task
- task_09.cpp - ninth task

tasks 4,5,8,10 in progress =)

### basic C++ tasks
This folder contains basic C++ tasks (something like HackerRank). The condition for each task can be viewed in the corresponding code in the comments.

## ▶️ How to Run

1. Install a C++ compiler (e.g., g++).

2. Navigate to the folder with the task you want to run:
```sh
cd starter tasks
```
or:
```sh
cd separate compilation
```
or:
```sh
cd tasks from 19.11.25
```
or:
```sh
cd basic C++ tasks
```
Compile the program:
```sh
g++ task_1.cpp -o program
```
Run it:
```sh
./program
```
For separate compilation:
```sh
g++ main.o func.o -o program
./program
```

## 👋 Note for the Teacher

All codes was tested on:
- my nerves  
- my laptop  
- my patience
  
Thank you for teaching us C++ =)

## 📝 Notes

- Mistakes are part of the process.
- If something breaks — that’s completely normal.
- If everything works on the first try — that’s magic.
