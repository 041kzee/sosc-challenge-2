
SOSC Challenge – Clues and Final Key
Overview

This document explains how the SOSC Challenge clues were calculated and how the final key was derived.

Clue 1 – Grid Rotation ASCII Sum

Grid:

ABCDE
FGHIJ
KLMNO
PQRST
UVWXY



Middle row: KLMNO

Process: Originally described as rotating rows and summing ASCII values of the middle row.

Important Note: A program is not needed at all. We could directly add the ASCII values of the middle row:

K = 75
L = 76
M = 77
N = 78
O = 79
Sum = 75 + 76 + 77 + 78 + 79 = 385


Clue 1 = 385

Clue 2 – String Transformations

Input string: soscchallenge

Operations:

Reverse the string → egnellahccsos

Remove every 3rd character → egelahcss

Shift each character by +2 ASCII → gigncjeuu

Count vowels → i, i, e, u, u → 4 vowels

Clue 2 = 4

Clue 3 – State Transition System

Input elements: 2, 7, 10, 11, 13, 4, 5

Rules:

Even numbers advance deterministically → reach final state

Prime numbers → direct transition to final state

Odd composite numbers → do not advance

Counting elements in final state:

All elements in this list are either even or prime → all reach final state

Clue 3 = 7

Final Key

Formula:

<hex_of_clue1>-<clue2_repeated_clue3_times>


Steps:

Convert Clue 1 to hexadecimal: 385 → 181

Repeat Clue 2 exactly Clue 3 times: 4 → 4444444

Join with - → 181-4444444

Final Key:

181-4444444

Notes

Programs were provided to automate the calculation of clues for practice, but for Clue 1, it is completely unnecessary. Direct addition of ASCII values is enough.

Clues 2 and 3 require stepwise processing to follow the rules.