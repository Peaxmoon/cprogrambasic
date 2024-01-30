package main

import "fmt"

func main() {

	age := 45
	fmt.Println(age <= 50)
	fmt.Println(age == 50)
	fmt.Println(age >= 50)
	fmt.Println(age != 50)

	if age < 30 {
		fmt.Println("age is less than 30")
	} else if age < 40 {
		fmt.Println("age is less than 45")
	} else {
		fmt.Println("age is not less than 45")
	}

	names := []string{"sujjal", "hem", "khanal", "peaxmoon", "fata"}

	for index, value := range names {
		if index == 1 {
			fmt.Println("\ncontinuing at pos ", index)
			continue
		}

		if index > 2 {
			fmt.Println("Breaking at position ", index)
			break
		}
		fmt.Printf("\nThe value at position %v is %v", index, value)
	}

}
