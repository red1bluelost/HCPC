package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	vote := make(map[string]int)
	in := bufio.NewScanner(os.Stdin)

	for in.Scan() {
		b := in.Text()

		if b == "***" {
			break
		}
		s := fmt.Sprintf("%s", b)

		_, ok := vote[s]
		if !ok {
			vote[s] = 1
		} else {
			vote[s]++
		}
	}
	winner := ""
	wincount := 0
	for n, v := range vote {
		if v > wincount {
			wincount = v
			winner = n
		}
	}
	if wincount == 0 {
		fmt.Print("Runoff!")
		return
	}
	delete(vote, winner)
	for _, v := range vote {
		if v == wincount {
			fmt.Print("Runoff!")
			return
		}
	}
	fmt.Print(winner)
}
