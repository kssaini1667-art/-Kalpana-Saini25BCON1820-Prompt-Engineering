# README Audit

## README Claim Audit

| **Claim made in README** | **True?** | **Evidence or correction made** |
|---|---|---|
| Factorial.py calculates and prints the factorial of n = 5 | Yes | Verified from Factorial.py, where n is set to 5 |
| Factorial.py uses a for loop | Yes | Verified from the for loop in Factorial.py |
| Factorial.py contains comments | No | The current version does not contain comments |
| Febonacci.py generates and prints Fibonacci values | Yes | Verified from Febonacci.py |
| Febonacci.py uses a loop that runs 10 times | Yes | The code uses range(10) |
| Dictionary.py contains Name, Roll and Marks | Yes | Verified from the dictionary definition in Dictionary.py |
| Dictionary.py iterates through the dictionary | Yes | Verified from the for loop in Dictionary.py |
| EvenOdd.py checks whether a number is even or odd | Yes | Verified from the if-else statement in EvenOdd.py |
| PrimeNumber.py checks whether a number is prime | Yes | Verified from the divisibility checks in PrimeNumber.py |
| SumNaturalNumbers.py calculates the sum of natural numbers | Yes | Verified from the loop that adds numbers from 1 to the entered number |
| No external libraries are required | Yes | No external libraries are imported in the six programs |
| The programs can be run using Python | Yes | The files contain Python code and use standard Python features |

## Commit Message Comparison

| **Commit** | **My message** | **AI message** | **Which is clearer, and why?** |
|---|---|---|---|
| 1 | feat: add factorial program | feat: add Factorial.py | The first explains the program's purpose, while the second identifies the filename directly |
| 2 | feat: add fibonacci program | feat: add Febonacci.py | The first describes the feature, while the second identifies the file |
| 3 | feat: add dictionary program | feat: add Dictionary.py | Both are understandable; the AI message names the file directly |
| 4 | feat: add natural number sum program | feat: add SumNaturalNumbers.py | The first explains the purpose, while the second gives the filename |
| 5 | feat: add even odd program | feat: add EvenOdd.py | The first describes the feature, while the second names the file |
| 6 | feat: add prime number program | feat: add PrimeNumber.py | The first explains the purpose, while the second identifies the filename |

## Audit Summary

The README was checked against the actual Python files in the repository. The program descriptions were compared with the code, and unsupported claims were identified. My commit messages were compared with AI-generated alternatives to understand how messages can describe either a program's purpose or its filename.

---

# HW-05 — README Claim Audit

| **Claim made in README** | **True?** | **Evidence** |
|---|---|---|
| The repository contains six Python programs | Yes | Verified from the six Python files in the repository |
| Factorial.py calculates and prints the factorial of n = 5 | Yes | The variable n is set to 5 in Factorial.py |
| Factorial.py uses a for loop | Yes | Verified from the for loop in Factorial.py |
| Factorial.py contains comments explaining the logic | No | Comments are not present in the current version |
| Febonacci.py generates and prints Fibonacci values | Yes | Verified from Febonacci.py |
| Febonacci.py uses a loop that runs 10 times | Yes | Verified from range(10) in Febonacci.py |
| Dictionary.py contains Name, Roll and Marks | Yes | Verified from the dictionary definition |
| Dictionary.py iterates through the dictionary | Yes | Verified from the for loop |
| SumNaturalNumbers.py calculates the sum of the first 10 natural numbers | No | The program takes user input and calculates the sum up to that number |
| EvenOdd.py checks whether n = 24 is even or odd | No | The program takes user input instead of setting n to 24 |
| PrimeNumber.py checks whether n = 29 is prime | No | The program takes user input instead of setting n to 29 |
| No external libraries are required | Yes | None of the six programs imports external libraries |
| The six programs can be run using Python commands | Yes | Verify the commands against the actual filenames |
| The README describes all six programs | Yes | Verify that all six programs are listed in README.md |

## HW-05 Audit Summary

The README was reviewed against the six Python programs in the repository. The descriptions were checked against the current code. Claims about comments and fixed input values were marked for correction because they do not match the current implementation. The README should be updated whenever the programs change.
