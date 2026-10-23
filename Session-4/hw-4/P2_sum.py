n = int(input("Enter a positive integer: "))

if n < 1:
    print("Please enter a positive integer.")
else:
    total = 0
    for number in range(1, n + 1):
        total += number

    print(f"Sum of natural numbers from 1 to {n} = {total}")
