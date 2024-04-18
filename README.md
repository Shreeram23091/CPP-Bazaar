### N-Queens Problem

#### Overview
The N-Queens problem is a classical problem in computer science and mathematics, where the task is to place N queens on an N×N chessboard in such a way that no two queens threaten each other. In other words, no two queens can share the same row, column, or diagonal.

#### Solution Approach
This repository contains a C++ implementation of the N-Queens problem using a backtracking algorithm. The program recursively places queens on the chessboard and backtracks when it encounters conflicts, ensuring that all possible solutions are explored.

#### Usage
To use the program:
1. Compile the `nqueens.cpp` file using a C++ compiler.
2. Run the executable and enter the size of the chessboard (N).
3. The program will output all possible solutions to the N-Queens problem for the given board size.

#### Example
For N = 4, one of the possible solutions is:
```
0 1 0 0 
0 0 0 1 
1 0 0 0 
0 0 1 0 
```

### All Permutations Problem

#### Overview
The All Permutations problem involves generating all possible permutations of a given string. A permutation of a string is an arrangement of its characters in a specific order.

#### Solution Approach
This repository contains a C++ implementation of the All Permutations problem using a recursive approach. The program generates all possible permutations of the input string by recursively swapping characters.

#### Usage
To use the program:
1. Compile the `all_permutations.cpp` file using a C++ compiler.
2. Run the executable and enter the input string.
3. The program will output all possible permutations of the input string.

#### Example
For input string "abc", the program will output:
```
abc
acb
bac
bca
cab
cba
```

### Phone Keypad Problem

#### Overview
The Phone Keypad problem involves generating all possible combinations of letters corresponding to a given sequence of numbers on a phone keypad.

#### Solution Approach
This repository contains a C++ implementation of the Phone Keypad problem using a recursive approach. The program generates all possible combinations of letters by recursively exploring the mappings of digits to letters on a phone keypad.

#### Usage
To use the program:
1. Compile the `phone_keypad.cpp` file using a C++ compiler.
2. Run the executable and enter the input sequence of numbers.
3. The program will output all possible combinations of letters corresponding to the input sequence.

#### Example
For input sequence "23", the program will output:
```
ad
ae
af
bd
be
bf
cd
ce
cf
```

## Rat in a Maze Problem

### Overview
The Rat in a Maze problem involves finding all possible paths for a rat to move from the starting cell to the destination cell in a maze.

### Solution Approach
This repository contains a C++ implementation of the Rat in a Maze problem using a backtracking algorithm.

### Usage
To use the program:
1. Compile the `rat_maze.cpp` file using a C++ compiler.
2. Run the executable.

### reverse an array using Multiple test case

1. **Input**: The user is prompted to enter the number of test cases (`t`). Then, for each test case, the user inputs an integer `n` followed by `n` integers.

2. **Reverse Operation**: For each test case, the program reverses the order of the `n` integers using a two-pointer approach. It initializes two pointers `s` (starting pointer) and `e` (ending pointer) at the beginning and end of the array, respectively. Then, it swaps the elements pointed by `s` and `e`, incrementing `s` and decrementing `e`, until `s` becomes greater than or equal to `e`.

3. **Output**: After reversing the sequence, the program prints the reversed sequence for each test case.

4. **Time Complexity**: The overall time complexity of the program is **O(t * n)**, where `t` is the number of test cases and `n` is the average size of the input sequence across all test cases. This is because for each test case, the program performs a linear-time reversal operation on the sequence of size `n`. Therefore, the total time complexity is proportional to the number of test cases multiplied by the size of the input sequences.


Certainly! Here's a simplified README for the provided C++ code:

---

## Cumulative sum(Bruteforce)

This C++ program calculates the sum of elements within specified ranges of an array.

### Usage

1. **Compilation**: Compile the program using a C++ compiler.
2. **Execution**: Run the compiled executable.
3. **Input**: Follow the prompts to input array size, elements, and query ranges.
4. **Output**: The program will display the sum of elements within each specified range.

### Example

```
Enter the value of n: 5
2 4 6 8 10
Enter number of queries: 3
Enter the range of index you want to sum: 0 2
Enter the range of index you want to sum: 1 3
Enter the range of index you want to sum: 2 4

Output:
12
18
24
```

---
Sure, here's a simplified README for the provided C++ code:

---

## cumulative sum using prefix_sum

This C++ program efficiently calculates the sum of elements within specified ranges of an array using the prefix sum technique.

### Usage

1. **Compilation**: Compile the program using any C++ compiler.

2. **Execution**: Run the compiled executable.

3. **Input**: Input the size of the array, followed by the elements of the array, and then the number of queries and the range of indices for each query.

4. **Output**: The program will display the sum of elements within each specified range.

### Example

```
Input:
5
1 2 3 4 5
3
0 2
1 3
2 4

Output:
6
9
12
```
// time complexity=O(n)
