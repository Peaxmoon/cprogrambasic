package main

import "fmt"

func main() {

	menu := map[string]float64{
		"soup":    4.99,
		"pie":     2.33,
		"salad":   3.33,
		"cofee c": 9.99,
	}

	fmt.Println(menu)
	fmt.Println(menu["pie"])

	//looping maps
	for k, v := range menu {
		fmt.Println(k, "-", v)
	}


	//ints as keys type 
	phonebook := map[int]string{
		232832 : "sujjal"
		232332 : "ho"
		232232 : "mero"
		232532 : "nam"
	}

	fmt.Println(phonebook)
	fmt.Println(phonebook[232832])


}
