#include <iostream>

using namespace std;
void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display_array(int * arr){
    int arrLength = sizeof(arr)/sizeof(int);
    cout << arrLength ;
  
    cout << '[' ;
    for(int i = 0; i < arrLength; i++){
        cout << arr[i] << ',';
    }
    cout << ']' << endl;
}

int ** bubbleSort(int ** arr){
    
    int arrLength = sizeof(arr)/sizeof(int);
    cout << arrLength<<endl;;

    for(int i = 0; i < arrLength; i++){
        for(int j = 0; j < arrLength - 1 ; j++){
            if (arr[j] > arr[j+1]){
                //swap(&arr[j],&arr[j+1]);  //swap(&(a+i),&(a + (i+1)));
            }
        }
    }
    return arr;
}



int main(int argc,char ** argv){
    int arr[] = {9,2,3,1,4,2,4,2,1,3,4,22,4,2,58,3,29,1,2,4,3,2};
    int length = sizeof(arr)/sizeof(int);
    cout << length << endl;
    display_array(&arr);
    bubbleSort(arr);
    display_array(arr);
    return 0;
}