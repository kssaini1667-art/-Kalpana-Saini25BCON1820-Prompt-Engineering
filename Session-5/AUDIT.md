# README Audit

## README Claim Audit

| **Claim made in README** | **True?** | **Evidence or correction made** |
|---|---|---|
| Factorial.py calculates and prints the factorial of n = 5 | Yes | Verified from Factorial.py |
| Factorial.py uses a for loop | Yes | Verified from the code |
| Factorial.py contains comments | No | No comments are present in the current version of Factorial.py |
| Febonacci.py generates and prints Fibonacci values | Yes | Verified from Febonacci.py |
| Febonacci.py uses a loop that runs 10 times | Yes | The code uses range(10) |
| Dictionary.py contains Name, Roll and Marks | Yes | Verified from Dictionary.py |
| Dictionary.py iterates through the dictionary | Yes | Verified from the for loop |
| EvenOdd.py checks whether a number is even or odd | Yes | Verified from EvenOdd.py |
| PrimeNumber.py checks whether a number is prime | Yes | Verified from PrimeNumber.py |
| SumNaturalNumbers.py calculates the sum of natural numbers | Yes | Verified from SumNaturalNumbers.py |
| No external libraries are required | Yes | None of the six programs uses external library imports |
| The programs can be run using the Python command | Yes | The files contain Python code and can be run using Python |

## Commit Message Comparison

| **Commit** | **My message** | **AI message** | **Which is clearer, and why?** |
|---|---|---|---|
| 1 | feat: add factorial program | feat: add Factorial.py | The AI message identifies the filename directly, while my message explains the program's purpose. |
| 2 | feat: add fibonacci program | feat: add Febonacci.py | The AI message identifies the file, while my message describes the feature. |
| 3 | feat: add dictionary program | feat: add Dictionary.py | Both messages are understandable, but the AI message names the exact file. |
| 4 | feat: add sum program | feat: add SumNaturalNumbers.py | The AI message identifies the file, while my message is shorter and describes the purpose. | naming its file.

---
| 5 | feat: add even odd program | feat: add EvenOdd.py | My message explains the feature, while the AI message identifies the filename. |
| 6 | feat: add prime number program | feat: add PrimeNumber.py | My message explains the purpose, while the AI message names the file directly. |

## Audit Summary

The README was checked against the actual Python files in the repository. Program descriptions were verified, and unsupported claims were identified for correction. My commit messages were compared with AI-generated alternatives to understand the difference between describing a program's purpose and

# HW-05 — README Claim Audit

| **Claim made in README** | **True?** | **Evidence** |
|---|---|---|
| The repository contains six Python programs | Yes | Verified from the six .py files in the repository |
| Factorial.py calculates and prints the factorial of n = 5 | Yes | Verified from Factorial.py |
| Factorial.py uses a for loop | Yes | Verified from the for loop in Factorial.py |
| Factorial.py contains comments explaining the logic | No | Add comments to the file before marking this claim Yes |
| Febonacci.py generates and prints Fibonacci values | Yes | Verified from Febonacci.py |
| Febonacci.py uses a loop that runs 10 times | Yes | Verified from range(10) in Febonacci.py |
| Dictionary.py contains Name, Roll and Marks | Yes | Verified from the dictionary definition in Dictionary.py |
| Dictionary.py iterates through the dictionary | Yes | Verified from the for loop in Dictionary.py |
| SumNaturalNumbers.py calculates the sum of the first 10 natural numbers | No | The current program accepts user input; verify the input and output before making this claim |
| EvenOdd.py checks whether n = 24 is even or odd | No | The current program accepts user input; verify with input 24 before making this claim |
| PrimeNumber.py checks whether n = 29 is a prime number | No | The current program accepts user input; verify with input 29 before making this claim |
| No external libraries are required | Yes | None of the six Python programs imports external libraries |
| The six programs can be run using the listed Python commands | Yes | Verify that the commands match the actual filenames |
| The README describes all six programs | Yes | Verify that all six files are listed in the README |

## HW-05 Audit Summary

The README was reviewed against the six Python programs in the repository. The descriptions were checked against the current code, and claims that depend on specific inputs or comments were identified for verification. The README and audit should be updated after checking the final program versions.
