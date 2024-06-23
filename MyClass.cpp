#include "MyClass.h"

static void ClearClass(MyClass* const this_ptr);

static void ClearClass(MyClass* const this_ptr) {
	this_ptr->num = 0;
}

void Construct(MyClass* const this_ptr) {

}

void SetNum(MyClass* const this_ptr, int num) {

}

int GetNum(MyClass* const this_ptr, int num) {

}
