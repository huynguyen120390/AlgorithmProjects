import random 
def selectionSort(arr):
    for i in range(len(arr)):
        index,min = find_min(arr[i:])
        arr[index + i],arr[i] = arr[i],arr[index + i]
        print(f"i : {i} , min index {index + i}, val {min} , arr {arr}")
    return arr
        
def find_min(arr):
    min = arr[0]
    index = 0
    for i in range(len(arr)):
        if arr[i] < min:
            min = arr[i]
            index = i
    return index, min

if __name__ == "__main__":
    arr = [random.randint(0,100) for _ in range(20) ]
    print(arr)
    arr = selectionSort(arr)
    print(arr)
    
        

        
