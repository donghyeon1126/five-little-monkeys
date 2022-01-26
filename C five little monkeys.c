#include <stdio.h>
int main(void)
{
	int monkeys = 5;
	char num_array[6][7] = { "one", "two", "three", "four", "five" };
	while (monkeys > 0)
	{
		if (monkeys == 1)
		{
			printf("%s little monkey jumping on the bed\n", num_array[monkeys - 1]);
		}
		else
		{
			printf("%s little monkeys jumping on the bed\n", num_array[monkeys - 1]);
		}
		printf("One fell down and bumped his head.\n");
		printf("Mama called the doctor and the doctor said.\n\"No more monkeys jumping on the bed!\"\n");
		monkeys = monkeys - 1;
	}
	printf("No little monkeys jumping on the bed.\nNone fell off and bumped his head.\nMama called the doctor and the doctor said.\n\"Put those monkeys right to bed!\"");
	return 0;
}