def fibonacci(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

with open("results.txt", "w") as file:
    for i in range(25):
        file.write(f"{fibonacci(i)}\n")
