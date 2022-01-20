num_dict = {1:"one", 2:"two", 3:"three", 4:"four", 5:"five"}
monkeys = 5
while True:
	if monkeys < 1:
		break

	if monkeys > 1:
		print(num_dict[monkeys]+" little monkeys jumping on the bed")
	if monkeys == 1:
		print(num_dict[monkeys]+" little monkey jumping on the bed")
	print("One fell off and bumped his head")
	print("Mama called the doctor and the doctor said")
	print("\"No more monkeys jumping on the bed!\"")
	monkeys = monkeys -1
print("No little monkeys jumping on the bed.")
print("None fell off and bumped his head.")
print("Mama called the doctor and the doctor said.")
print("\"Put those monkeys right to bed!\"")