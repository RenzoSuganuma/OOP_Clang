#pragma once

typedef void (*func_ptr)(void);

typedef struct s_class {
	char id_;
	func_ptr task_ptr;
}Sample;

void setup_sample(Sample* const ptr, char id, func_ptr task) {
	ptr->id_ = id;
	ptr->task_ptr = task;
}

void call_sample_task(Sample* const ptr) {
	ptr->task_ptr();
}
