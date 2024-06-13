let arr = [2,1,3,34,7,4,5,6,9,64, 34, 25, 12, 22, 11, 90]
console.log("inicio => ",arr)
function bublleSort(list){
    let nList = list.length;
    let aux;
     for(let i = 0; i < nList; i++){
         for(let j = 0; j < nList;j++){
             if(list[j] > list[j+1]){
                 aux = list[j];
                 list[j] = list[j+1]
                 list[j+1] = aux
             }
        }
    }
}
bublleSort(arr)
console.log("inicio => ",arr)