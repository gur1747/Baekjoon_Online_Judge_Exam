#include <stdio.h>

int main() {
    //varialbles
	int init;
    int input, output;
	int input_a, input_b, output_b;
    int cycle_result;

	scanf("%d", &init);

    if(init < 0 || init > 99){
        printf("Wrong Input(range : 0~99).\n");
        return -1;
    }

	//compute cycle
	input = init;
	int reps = 0;
	while (1) {
		//compute
		input_a = input / 10;
		input_b = input % 10;

		output = input_a + input_b;
		output_b = output % 10;

		cycle_result = (10 * input_b) + output_b;

		//count cycle
		reps++;

		//compare result with initial value
		if (init == cycle_result) {
			break;
		}

		input = cycle_result;
	}

	printf("%d\n", reps);

	return 0;
}
