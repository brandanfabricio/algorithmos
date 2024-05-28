package main

import "fmt"

func main() {
	arr := []int{304, 37, 12, 45, 6, 2, 11, 332, 1, 3, 5, 7, 42, 31, 88}
	fmt.Println(arr)
	fmt.Println(len(arr))
	for i := 1; i < len(arr); i++ {
		clave := arr[i]
		j := i - 1
		for j >= 0 && arr[j] > clave {
			arr[j+1] = arr[j]
			j = j - 1
		}
		arr[j+1] = clave
	}
	fmt.Println(arr)
}
