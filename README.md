# Roman Numeral to Integer (C++)

## What it does
Converts a Roman numeral string (e.g., `XIV`, `MCMXCIV`) into its integer value.
The program also checks that the input contains only valid Roman numeral characters (`I,V,X,L,C,D,M`).

## Key idea
For each character, I compare its value with the next character’s value.
If the current value is smaller than the next value, I subtract it; otherwise, I add it.
For the last character, there is no “next” character, so I treat the next value as `0`, which makes the last character always added.

## What I learned
- How to prevent out-of-range access by checking `i + 1 < s.size()`
- How subtractive notation works in Roman numerals (e.g., `IV = 4`, `IX = 9`)
- How to structure control flow with loops and `switch`

## Requirements
A C++ compiler (`g++` or `clang++`)

## How to run (macOS / Linux)
```bash
g++ main.cpp -o app
./app
```
## How to run (Windows, MinGW)
```bash
g++ main.cpp -o app.exe
```
## Command Prompt:
```bash
app.exe
```
##Power SHell:
```bash
.\app.exe
```
##Example
```bash
Input: MCMXCIV
Output: 1994
```
##Next Improvement
```bash
	•	Reject invalid patterns (e.g., IIV, VV, too many repeats) instead of only validating characters
	•	Allow lowercase input (iv, xv) by converting to uppercase
```
