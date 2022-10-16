//simple linear search in js
function ls(ar,data){

    for(let i=0;i<ar.length;i++){
        if(ar[i]==data) return i
    }
    return console.log("Not in array")
}

console.log(ls([33,45,4,67,4,100,23,7],7))