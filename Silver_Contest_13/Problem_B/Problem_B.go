package main

import "fmt"

func compare(l1, l2 string) {
	fmt.Println(l1)
	fmt.Println(l2)
	for i := 0; i < len(l1); i++{
		if l1[i] == l2[i] {
			fmt.Printf(".")
		} else {
			fmt.Printf("*")
		}
	}
	fmt.Printf("\n\n")
}

func main() {
	var tests int
	fmt.Scan(&tests)
	for i := 0; i < tests; i++{
		l1, l2 := "", ""
		fmt.Scan(&l1)
		fmt.Scan(&l2)
		compare(l1, l2)
	}
}
