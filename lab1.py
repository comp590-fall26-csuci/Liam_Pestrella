def print_fibonacci_to_file(filename="results.txt", count=25):
    
    with open(filename, "w") as file:
        a, b = 0, 1
        for _ in range(count):
            file.write(f"{a}\n")
            a, b = b, a + b


print_fibonacci_to_file()
