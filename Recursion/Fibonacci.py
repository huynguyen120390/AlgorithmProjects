def fibonacci(num):
    if num < 2:
        return 1
    return num + fibonacci(num-1)

if __name__ == "__main__":
    print(fibonacci(150))