def fibonacci(num):
    if num < 2:
        return num
    
    return fibonacci(num-1) + fibonacci(num-2)

def fibonacci_iterative(index):
    nums = [0,1]
    i = 2
    while(i<= index):
        nums.append(nums[i-1] + nums[i - 2])
        i+=1
        
    return nums[-1]

if __name__ == "__main__":
    print(fibonacci_iterative(100))
    print(fibonacci(10))