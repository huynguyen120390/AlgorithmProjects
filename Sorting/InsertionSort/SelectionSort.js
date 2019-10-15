
function generate_randomInt(min,max){
    return Math.floor(Math.random() * (max - min)) + min;
}

function generate_randomIntArray(min,max,length){
    let arr = [];
    for(let i = 0; i < length;i++){
        let num = generate_randomInt(min,max);
        arr.push(num);
    }
    return arr;
}

function swap(a,b){
    let temp = a;
    a = b;
    b = temp;
    return a,b;
}

function bubbleSort(arr){
    let minIndex, val, temp;
    for(let i = 0; i < arr.length; i++){
        minIndex,val = find_min(arr.slice(i,));
        console.log(i,arr[i],minIndex,val,arr);
        temp = arr[i];
        arr[i]= arr[minIndex+i];
        arr[minIndex+i] = temp;
        //arr[i],arr[minIndex+i] = swap(arr[i],arr[minIndex+i]);
    }
    return arr;
}

function find_min(arr){
    console.log("Find min");
    let min = arr[0];
    let minIndex = 0;
    for(let i = 0; i< arr.length; i++){
        if (arr[i] < min){
            min = arr[i];
            minIndex = i;
            console.log(minIndex,min);
        }
    }
    return [minIndex,min];
}

function swap(a,b){
    let temp = a;
    a = b;
    b = temp;
    return a,b;
}


let main = function(){
    let arr = generate_randomIntArray(0,100,10);
    console.log(arr);
    let arr2 = bubbleSort(arr);
    console.log(arr);
}
if(typeof require !== 'undefined' && require.main == module){
    main();
}
