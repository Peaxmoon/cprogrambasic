package main

import "fmt"

func main() {
	//var ages [3]int = [3]int{20, 25, 30, 35}
	var ages = [3]int{20, 25, 30}

	names := [4]string{"sujjal", "hem", "khanal", "peaxmoon"}
	names[2] = "bhawana"
	fmt.Println(names, len(names))
	fmt.Println(ages, len(ages))

	// Slices (use arrays under the hood)
	var scores = []int{100, 50, 60}
	scores[2] = 35
	scores = append(scores, 40)

	fmt.Println(scores, len(scores))

	//slice ranges
	rangeOne := names[1:3]
	rangeTwo := names[2:]
	rangeThree := names[:3]
	fmt.Println(rangeOne, rangeTwo, rangeThree)

	rangeOne = append(rangeOne, "supra")
	fmt.Println(rangeOne)

}
