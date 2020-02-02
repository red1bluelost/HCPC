package main

import "fmt"

func main() {
	N, Y := 0, 0
	fmt.Scan(&N)
	fmt.Scan(&Y)

	found := make(map[int]int)
	YY := Y

	for i := 0; i < Y; i++ {
		j := 0
		fmt.Scan(&j)
		for _, k  := range found {
			if j == k {
				YY--
				break
			}
		}
		found[i] = j
	}

	for i := 0; i < N; i++ {
		same := false
		for j := 0; j < len(found); j++ {
			if i == found[j] {
				same = true
				break
			}
		}
		if same {continue}
		fmt.Println(i)
	}
	fmt.Printf("Mario got %d of the dangerous obstacles.\n", YY)
}
