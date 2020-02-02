package main

import (
	"fmt"
	"time"
)

func main() {
	l := []int{9, 45, 23, 67, 78}
	t := 0
	i := 0

	var tmp int

	goto end
start:
	tmp = l[i]
	i++
	t += tmp
end:
	if i < 5 {
		goto start
	}

	println(t)

SwitchStatement:
	switch 1 {
	case 1:
		println(1)
		for i := 0; i < 10; i++ {
			break SwitchStatement
		}
		println(2)
	}
	println(3)

	tick := time.Tick(100 * time.Millisecond)
LOOP:
	for {
		select {
		case <-tick:
			i := 0
			fmt.Println("tick", i)
			break LOOP
		default:
			// "i" is undefined here
			fmt.Println("sleep")
			time.Sleep(30 * time.Millisecond)
		}
	}
	// "i" is undefined here
}
