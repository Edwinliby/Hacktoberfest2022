package main

import (
	"encoding/json"
	"fmt"
	"log"
	"os"
)

type Character struct {
	Name string `json:"name"`
	Age  int    `json:"age"`
}

func main() {

	fileJsonData, err := os.ReadFile("./person.json")

	if err != nil {
		log.Fatalf("error: %v", err)
	}

	characters := make([]Character, 0)

	if err = json.Unmarshal(fileJsonData, &characters); err != nil {
		log.Fatalf("error: %v", err)
	}

	fmt.Print("\nCharacters:\n")
	for c := 0; c < len(characters); c++ {

		fmt.Printf("\nname: %s | age: %d ", characters[c].Name, characters[c].Age)
	}

}
