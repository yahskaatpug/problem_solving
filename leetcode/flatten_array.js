// Array flattening

// - nested_array = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]
// - flat_array = [1, 2, 3, 4, 5, 6, 7, 8, 9]

// - nested_array = [
//     [1, 2, 3, [1,2,3,4, [1,2,3]],
//     [4, 5, 6],
//     [7, 8, 9]
// ]
// - flat_array = [1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 6, 7, 8, 9]

function recurFlat1(i, arr, res){

    if(i == arr.length) return;

    if(Array.isArray(arr[i])){
        recurFlat1(0, arr[i], res);
    }
    else{
        res.push(arr[i]);
    }

    recurFlat1(i+1, arr, res);

}

function recurFlat2(arr, res){
    for(let i=0;i<arr.length;i++){
        if(Array.isArray(arr[i])){
            recurFlat2(arr[i], res);
        }
        else{
            res.push(arr[i]);
        }
    }

}

// const arr = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]

const arr = [    
        [1, 2, 3, [1,2,3,4, [1,2,3]],
        [4, 5, 6],
        [7, 8, 9]]
]

let res1=[], res2=[];
recurFlat1(0, arr, res1);
recurFlat2(arr, res2);


console.log("res1->",res1);
console.log("res2->",res2);
