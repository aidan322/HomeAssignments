# Assignment 4

## Author
Айдан Монгуш группа 24Б82-мм

## Contacts
st133061@student.spbu.ru

## Description
This assignment builds on the previous Transformer class hierarchy from Assignment3.
The following features were implemented:

- Overloaded output stream operator ('<<') for each class.
- Comparison operators to compare strength of transformers.
- Constructor overloading.
- Code formatting using 'astyle' with flags '-A1 -s4'.
- Improved 'Makefile' with variable definitions and stricter compilation flags :
  '-Wall -Werror -Wpedantic'.

Each class is split into a '.cpp' and '.h' file, and all features are tested in 'main.cpp'.

## Build
make

## Run
./transformers

## Format
astyle -A1 -s4 *.cpp *.h

## Clean

make clean
