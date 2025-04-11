#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};


void Square(int& i) {
	i = i * i;
}

void Double(int* i) {
	*i = *i * 2;
}

int main()
{
	
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int num = 5;
	// declare a int reference and set it to the int variable above
	int& refNum = num;

	// output the int variable
	cout << "Initial num: " << num << endl;

	// set the int reference to some number
	refNum = 8;
	
	// output the int variable
	cout << "After changing refNum: " << num << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	cout << "Changing refNum also changed num since they reference the same memory location." << endl;
	
	
	// output the address of the int variable
	cout << "Address of num: " << &num << endl;
	// output the address of the int reference
	cout << "Address of refNum: " << &refNum << endl;
	// are the addresses the same or different? (insert answer)
	cout << "They are the same, because a reference shares the same memory address as the the original variable." << endl;


	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	Square(num);
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	// output the int variable to the console
	cout << "After Square function: " << num << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pNum = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pNum = &num;

	// output the value of the pointer
	cout << "Pointer value (address it points to): " << pNum << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	cout << "This is the address of num." << endl;
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "Value at the pointer: " << *pNum << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	Double(pNum);
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	cout << "After Double function: " << *pNum << endl;
	// output the dereference pointer
	cout << "Value of num after pointer modification: " << num << endl;
	// output the int variable created in the REFERENCE section
	// did the int variable's value change when using the pointer? (insert answer)
	cout << "Yes, num's value changed because the pointer directly modifed its memory." << endl;
}