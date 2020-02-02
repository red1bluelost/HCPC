package main

import (
	"fmt"
)

type interval struct {
	hh int
	mm int
}

func (i *interval) readString(s string) {
	fmt.Sscanf(s, "%d:%d", &i.hh, &i.mm)
}

func (i interval) String() string {
	return fmt.Sprintf("%02d:%02d", i.hh, i.mm)
}

func intervalToInt(i interval) int {
	return (i.hh * 60) + i.mm
}

func intToInterval(i int) interval {
	return interval{
		hh: i / 60,
		mm: i % 60,
	}
}

type star struct {
	flash interval
	inter interval
}

func makeStar(f, i interval) star {
	var s star
	s.flash = f
	s.inter = i
	return s
}

func checkIfOverlap(f, s star) (interval, error) {
	startf := intervalToInt(f.flash)
	starts := intervalToInt(s.flash)
	interf := intervalToInt(f.inter)
	inters := intervalToInt(s.inter)

	for {
		if startf >= 60*24*10000 {
			return f.flash, fmt.Errorf("%s", "Never")
		}
		if startf == starts {
			return intToInterval(startf), nil
		}
		if startf < starts {
			startf += interf
		} else {
			starts += inters
		}
	}
}

func dayOfOverlap(i interval) string {
	j := (i.hh / 24) % 7
	switch j{
	case 0:
		return "Saturday"
	case 1:
		return "Sunday"
	case 2:
		return "Monday"
	case 3:
		return "Tuesday"
	case 4:
		return "Wednesday"
	case 5:
		return "Thursday"
	case 6:
		return "Friday"
	}
	panic("never")
}

func main() {
	var (
		sfirst, ssec, sifirst, sisec string
		first, sec, ifirst, isec     interval
	)
	fmt.Scan(&sfirst)
	fmt.Scan(&ssec)
	fmt.Scan(&sifirst)
	fmt.Scan(&sisec)
	first.readString(sfirst)
	sec.readString(ssec)
	ifirst.readString(sifirst)
	isec.readString(sisec)

	star1 := makeStar(first, ifirst)
	star2 := makeStar(sec, isec)

	overlap, ok := checkIfOverlap(star1, star2)
	if ok != nil {
		fmt.Println("Never")
		return
	}
	fmt.Println(dayOfOverlap(overlap))
	timeOver := interval{
		hh: overlap.hh % 24,
		mm: overlap.mm,
	}
	fmt.Println(timeOver)

}
