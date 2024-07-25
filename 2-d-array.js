
const convertToNDArray = (arr,n)=>{
    let tmpArr=[];
    let tmpCount=0;
    let res = [];
    for(let i=0;i<arr.length;){
        if(tmpCount<n){
            tmpArr.push(arr[i]);
            tmpCount++;
            i++;
        }
        else{
            console.log("tmpArr:", tmpArr);
            res.push(tmpArr);
            tmpCount=0;
            tmpArr = [];
        }
    }
    if(tmpArr){
        res.push(tmpArr);
    }

    return res;
}

const arr = [1,2,3,4,5,6,7];
const n =3;
console.log(convertToNDArray(arr,n));

