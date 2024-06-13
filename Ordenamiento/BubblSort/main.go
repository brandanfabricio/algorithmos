package main

import "fmt"

func main() {
	arr := []int{304, 37, 12, 45, 6, 2, 11, 1, 3, 5, 7, 42, 31, 88}
	var aux int
	fmt.Println(arr)
	for i := 1; i < len(arr)-1; i++ {
		for j := 0; j < len(arr)-1; j++ {
			if arr[j] > arr[j+1] {
				aux = arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = aux
			}
			// fmt.Printf("indice [%d] -> %d \n", i, arr[i])
		}
	}
 	fmt.Println(arr)
}
