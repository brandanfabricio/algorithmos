let arr = [2,1,3,34,7,4,5,6,9,64, 34, 25, 12, 22, 11, 90]
console.log(arr.length)
function insertionSort(list){
    for (let i = 1; i< list.length - 1 ;i++){
           let clave = list[i]
           let j = i-1
        while(j>=0 && list[j]> clave){
            list[j+1] = list[j]
            j= j-1
        }
        list[j+1] = clave
    }
}
insertionSort(arr)
console.log(arr)