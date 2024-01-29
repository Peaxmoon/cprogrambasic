package main

import "fmt"

func main() {
	age := 35
	name := "sujjal"
	fmt.Print("Hello, \nWorld! ")
	fmt.Print("man\n")
	fmt.Println("My age is", age, "and my name is ", name)

	// printf(formatted strings) format specifier-%v
	fmt.Printf("My age is %v and my name is %v\n", age, name)
	fmt.Printf("My age is %q and my name is %q\n", age, name)
	fmt.Printf("age is of type %T\n", age)
	fmt.Printf("You scored %.1f points !\n", 33.23)

	// Sprintf (save formatted strings)

	var str = fmt.Sprintf("My age is %v and my name is %v\n", age, name)
	fmt.Println("the saved string is :", str)

}
