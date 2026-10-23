number = int(input("Enter an integer: "))

if number < 2:
    is_prime = False
else:
    is_prime = True
    divisor = 2
    while divisor * divisor <= number:
        if number % divisor == 0:
            is_prime = False
            break
        divisor += 1

if is_prime:
    print(f"{number} is a prime number")
else:
    print(f"{number} is not a prime number")
