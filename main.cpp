#include <iostream>


// Pointers
/*
 * Auther: Aman Arabzadeh
 * Date: 2023-07-08
 *  Examples and explanations of using pointers in C++ for Beginners
 */

// Why use pointers? Go to the link below
/// https://qr.ae/pyg4N5


// Sources:
    // - "Pointers in C++" by GeeksforGeeks: https://www.geeksforgeeks.org/cpp-pointers/
    // - "C++ Pointers" on Wikipedia: https://en.wikipedia.org/wiki/Pointer_(computer_programming)
    // - "C++ Programming Language" by Bjarne Stroustrup





// Function that swaps two integers using pointers
void swap(int* a, int* b) {
    std::cout << "Address of a is before swapping: " << &a << "\nAddress of b before swapping is: " << &b  << "\n";
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Example 8: Using pointers to functions
int square(int* num) {
    return *num = (*num) * (*num);
}


int main() {
// Declaring pointers
// To declare a pointer, we use the * symbol after the data type.
// It is important to initialize pointers to nullptr to ensure they don't point to any specific memory address by default.

    int* ptr;           // Declares a pointer to an integer
    float* fptr;        // Declares a pointer to a float

// Explanation:
// When declaring pointers, it is crucial to initialize them before using them.
// Initializing pointers to nullptr provides a clear indication that they are not currently pointing to any valid memory address.
// By initializing pointers to nullptr, we establish a safe and well-defined initial state for the pointers.

// Uninitialized or randomly assigned pointers can lead to undefined behavior, crashes, or accessing invalid data.
// Pointers that are not initialized or assigned a valid memory address are commonly referred to as "wild pointers."
// Wild pointers can result in unexpected behavior, as they may point to arbitrary memory locations.
// https://www.geeksforgeeks.org/what-are-wild-pointers-how-can-we-avoid/

// By initializing pointers to nullptr, we ensure that they start with a known and safe state.
// Later, when we need the pointers to point to specific objects or dynamically allocated memory, we can assign them valid memory addresses using appropriate operations.

// The better way of declaring pointers is to initialize them with nullptr directly, like this:
// int* ptr = nullptr;           // Declares a pointer to an integer
// float* fptr = nullptr;        // Declares a pointer to a float

// Initializing pointers to nullptr is a recommended practice that promotes clarity,
// safety, and helps prevent issues associated with uninitialized or wild pointers.


// https://www.quora.com/Why-are-wild-pointers-dangerous-in-C++-programming
// Read C++ Primer for more information or visit the provided resources.





    // Example 1: Storing addresses in pointers
    int x = 10;
    ptr = &x;         // Stores the address of x in ptr

    // Example 2: Der-eferencing pointers
    int y = *ptr;          // Dereferences ptr to obtain the value stored at that memory address (y will be 10)
    std::cout << "Y has value of: " << y << "\n"; // 10

    // Example 3: Dynamic memory allocation using new
    int* arr = new int[5]; // Allocates memory for an array of 5 integers

    // Example 4: Pointer arithmetic
    int* p = arr;
    for (int i = 0; i < 5; i++) {
        *p = i + 1;
        std::cout << *p << ", "; // 1, 2, 3, 4, 5,
        p++;
    }
    std::cout << std::endl;

    // Example 11: Pointer arithmetic and array indexing
    int arr1[] = {10, 20, 30, 40, 50};
    int* ptr1 = arr1;

    std::cout << "arr[2]: " << *(ptr1 + 2) << std::endl;   // Output: 30
    std::cout << "arr[4]: " << *(ptr1 + 4) << std::endl;   // Output: 50
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += *ptr1;
        ptr1++;
    }

    std::cout << "Sum of numbers: " << sum << std::endl;   // Output sum is: 150



// Example 13: Pointer arithmetic with character arrays  c style '\0' null character
    char str[] = "VENI-VIDI-VICI";
    char* c = str;

    while (*c != '\0') {
        std::cout << *c << " ";   // Output: V E N I - V I D I - V I C I
        c++;
    }
    std::cout << std::endl;

    // Example 5: Pointers and arrays
    int numbers[] = {1, 2, 3, 4, 5};
    int* pNumbers = numbers;      // Points to the first element of the array
    for (int i = 0; i < 5; i++) {
        std::cout << *pNumbers << " ";   // Output: 1 2 3 4 5
        pNumbers++;
    }

    std::cout << std::endl;

    // Example 6: Passing by pointers to the function
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // passing addres of a and b;
    std::cout << "Address of a is after swapping: " << &a << "\nAddress of b after swapping is: " << &b  << "\n";
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

// Example 7: Const and pointers
// These examples demonstrate the usage of const pointers, which provide a way to work with read-only or immutable data,
// ensuring that neither the value nor the pointer itself can be modified.

// 1. Pointer to a const variable
    int number = 10;
    const int* constPtrConst1 = &number;   // Pointer to a const int

// *constPtr = 20;     // Error: Cannot modify the value using a const pointer

// 2. const pointer to a variable
    int data1 = 5;
    int data2 = 10;
    int* const constPtrConst2 = &data1;    // const pointer to an int

// constPtr = &y;     // Error: Cannot reassign the const pointer

// 3. const pointer to a const variable
    const int numberConst = 10;
    const int* const constPtrConst3 = &numberConst;    // const pointer to a const int

    // *constPtrConst = 20;     // Error: Cannot modify the value using a const pointer
    // constPtrConst++;         // Error: Cannot modify the pointer itself


    // Example 8: Using pointers to functions
    square(&x);           // Passes the address of x to the square function, modifies the value at that address using pointers
    std::cout << "After square: x = " << x << std::endl; // Power of pointers

    // Example 9: Potential pitfalls
    int* nullPtr = nullptr;
    // *nullPtr = 5;     // Error: Null pointer dereference

    // Uninitialized Pointers:
    // Using uninitialized pointers can lead to crashes or accessing random memory addresses.
    // It is crucial to initialize pointers before using them. Here's an example:
    int* uninitializedPtr;
   // *uninitializedPtr = 10;    // Error: Using uninitialized pointer


    // Incompatible Pointer Types:
    // Assigning a pointer of one type to a pointer of another incompatible type can lead to incorrect memory access and undefined behavior.
    // Here's an example:
    int data = 10;
    // float* floatPtrType = &data;      // Error: Incompatible pointer types, not same type

    delete[] arr;         // Deallocates the memory when it's no longer needed, to free memory for avoiding memory leak.



    std::cout << "======================================================================\n\n\n\n";

    return 0;
}
