def bubbleSort(arr):
    length = len(arr)
    for i in range(0,length,1):
        for j in range(0,length-1,1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                print(arr)
    return arr


if __name__ == '__main__':
    arr = [72,3,2,4,2,4,5,2,1,5,3,2,344,2]
    bubbleSort(arr)
    print(arr)
            
