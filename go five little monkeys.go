package main

import "fmt"
func main() {
var monkeys int = 5;
var num_map = map[int]string{
1:"one",
2:"two",
3:"three",
4:"four",
5:"five",
}
for monkeys > 0 {
if(monkeys > 1) {
fmt.Println(num_map[monkeys]+" monkeys jumping on the bed");
}
if(monkeys == 1) {
fmt.Println(num_map[monkeys]+" monkey jumping on the bed");
}
fmt.Println("One fell off and bumped his head\nMama called the doctor and the doctor said \n\"No more monkeys jumping on the bed!\"");
monkeys = monkeys - 1;
}
fmt.Println("No little monkeys jumping on the bed.\nNone fell off and bumped his head.\nMama called the doctor and the doctor said.\n\"Put those monkeys right to bed!\"");
}
