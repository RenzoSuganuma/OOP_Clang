#include "stdio.h"
#include "sample.h"

void task() {
	printf("TASK\n");
}

int main() {
	Sample samp;
	setup_sample(&samp, 'A', &task);

	call_sample_task(&samp);

	return 0;
}
