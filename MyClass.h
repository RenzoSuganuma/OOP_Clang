#ifndef MY_CLASS_INCLUDED
#define MY_CLASS_INCLUDED

typedef struct myclass {
	int num;
}MyClass;

void Construct(MyClass* const this_ptr);
void SetNum(MyClass* const this_ptr, int num);
int GetNum(MyClass* const this_ptr, int num);

#endif // !MY_CLASS_INCLUDED
