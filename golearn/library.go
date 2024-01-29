package main

import (
	"fmt"
	"sort"
	"strings"
)

func main() {
	greetings := "hello you nigga"

	fmt.Println(strings.Contains(greetings, "nigga"))
	fmt.Println(strings.ReplaceAll(greetings, "hello", "hey"))
	fmt.Println(strings.ToUpper(greetings))
	fmt.Println(strings.Index(greetings, "gg"))
	fmt.Println(strings.Split(greetings, "o")) //changes into slice from the characters

	//the original remains unchanged
	fmt.Println("original string value = ", greetings)

	ages := []int{23, 25, 74, 84, 23, 74, 74, 11, 34, 65, 44}

	sort.Ints(ages)
	fmt.Println(ages)

	index := sort.SearchInts(ages, 25)
	fmt.Println(index)

	names := []string{"sujjal", "hem", "khanal", "peaxmoon", "fata"}

	sort.Strings(names)
	fmt.Println(names)

	fmt.Println(sort.SearchStrings(names, "khanal"))
}
