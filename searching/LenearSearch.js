function ls(ar,data){
    for(let i=0;i<ar.length;i++){
        if(ar[i]==data) return i
    }
    return -1
}

console.log(ls([3,4,5,7],3))