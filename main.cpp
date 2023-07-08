#include <iostream>


// Pointers

// What is a pointer?
    // In C++, a pointer is a variable that stores the memory address of another variable.
    // Pointers allow us to indirectly access and manipulate data stored in memory.

// Why use pointers in C++?
    // Pointers are used in C++ for various reasons:
    // 1. Dynamic memory allocation: Pointers enable us to allocate memory dynamically during runtime using operators like new and delete.
    // 2. Efficiency: Pointers can be more efficient in certain scenarios, such as when dealing with large data structures or when passing arguments to functions.
    // 3. Direct memory access: Pointers provide direct access to memory, allowing us to modify data at a particular memory location.
    //  This can be useful for low-level programming or optimizing performance, embedded systems.


// Potential pitfalls with pointers
// While pointers provide flexibility and power, they also come with potential pitfalls that need to be handled carefully.
    // 1. Null pointers
    // Pointers that are not initialized or assigned a valid memory address can lead to crashes or undefined behavior.
    // Always initialize pointers to nullptr or a valid memory address.

    // 2. Dangling pointers
    // Pointers that point to memory that has been deallocated can result in accessing invalid data.
    // Avoid using dangling pointers by deallocating memory when it's no longer needed.
    // It is essential to deallocate memory properly and avoid using dangling pointers.

    // 3. Memory leaks
    // Forgetting to deallocate dynamically allocated memory with delete or delete[] can lead to memory leaks.
    // Memory leaks occur when dynamically allocated memory is not freed, causing the program to consume more and more memory over time.
    // It is vital to release the allocated memory appropriately to prevent memory leaks and ensure efficient memory usage.


// Sources:
    // - "Pointers in C++" by GeeksforGeeks: https://www.geeksforgeeks.org/cpp-pointers/
    // - "C++ Pointers" on Wikipedia: https://en.wikipedia.org/wiki/Pointer_(computer_programming)
    // - "C++ Programming Language" by Bjarne Stroustrup





// Function that swaps two integers using pointers
void swap(int* a, int* b) {
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
    int* ptr;           // Declares a pointer to an integer
    float* fptr;        // Declares a pointer to a float

    // Example 1: Storing addresses in pointers
    int x = 10;
    ptr = &x;         // Stores the address of x in ptr

    // Example 2: Dereferencing pointers
    int y = *ptr;          // Dereferences ptr to obtain the value stored at that memory address (y will be 10)

    // Example 3: Dynamic memory allocation
    int* arr = new int[5]; // Allocates memory for an array of 5 integers

    // Example 4: Pointer arithmetic
    int* p = arr;
    for (int i = 0; i < 5; i++) {
        *p = i + 1;
        p++;
    }

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

    std::cout << "Sum of numbers: " << sum << std::endl;   // Output: 150



// Example 13: Pointer arithmetic with character arrays
    char str[] = "Hello";
    char* c = str;

    while (*c != '\0') {
        std::cout << *c << " ";   // Output: H e l l o
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

    // Example 6: Passing by pointers
    int a = 5, b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    // Example 7: Const and pointers
    int number = 10;
    const int* constPtr = &number;   // Pointer to a const int
    // *constPtr = 20;     // Error: Cannot modify the value using const pointer
    // constPtr++;         // Error: Cannot modify the pointer itself

    // Example 8: Using pointers to functions
    square(&x);           // Passes the address of x to the square function, modifies the value at that address
    std::cout << "After square: x = " << x << std::endl;

    // Example 9: Potential pitfalls
    int* nullPtr = nullptr;
    // *nullPtr = 5;     // Error: Null pointer dereference

    delete[] arr;         // Deallocates the memory when it's no longer needed



    std::cout << "======================================================================\n\n\n\n";

    return 0;
}
