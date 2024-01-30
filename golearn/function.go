package main

import (
	"fmt"
	"math"
)

func sayGreeting(n string) {
	fmt.Printf("Good morning %v \n", n)
}

func sayBye(n string) {
	fmt.Printf("Goodbye %v\n", n)
}

func cycleNames(n []string, f func(string)) {
	for _, v := range n {
		f(v)
	}
}

func circleArea(r float64) float64 {
	return math.Pi * r * r
}

func main() {
	sayGreeting("sujjal")
	sayBye("hello")
	sayGreeting("fata")

	cycleNames([]string{"chiso", "cold", "veryChiso"}, sayGreeting)
	cycleNames([]string{"chiso", "cold", "veryChiso"}, sayBye)

	a1 := circleArea(13.2)
	a2 := circleArea(20)

	fmt.Println(a1, a2)

	fmt.Printf("circle 1 is %.3f circle 2 is %.2f.", a1, a2)

}
