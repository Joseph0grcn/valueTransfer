1.	Write a complete program that transfers values from vectors V1 and V2 to each other, as presented in the figure below. The figure presents values from V1 vector copied to V2 vector. It also presents values from V2 vector copied to V1 vector. The arrows present values being passed to each vector. You must use pointer offsets in the program. (hint: When you do v1.data(), it returns a pointer to the first element of the vector, and then you can use pointer arithmetic to access the elements.)


![image](https://github.com/Joseph0grcn/valueTransfer/assets/92579500/aaccb227-9874-4c7b-8453-e32f0441f20e)


2.	As presented in the previous questions figure, you are expected to copy objects from v1 and v2 to each other rather than integer values. In this question, you are asked to write a C++ program that performs certain operations on vectors of objects. The program should include the following components:

A. A `human` class with the following specifications:
    - Two public member variables: `height` (an integer) and `name` (a string).
    - A constructor that takes two parameters: an integer for the `height` and a string for the `name`. The constructor should have default values of `0` for the `height` and an empty string for the `name`.
    - A `display()` member function that prints the `name` and `height` to the console.

B. A function named `CopyValues()` that takes two vectors of `human` objects as parameters by reference. The function should perform the following operations:
    - Check if the sizes of the two vectors are equal.
    - If they are, iterate over the first six elements of the vectors.
    - For the first three elements, copy the value from the corresponding element in the second vector to the first vector.
    - For the next three elements, copy the value from the corresponding element in the first vector to the second vector.

C. In the `main()` function:
    - Create two vectors of `human` objects, `v1` and `v2`, with specific values.
   vector<human> v1 = {human(), human(), human(), human(170,"ali"), human(180,"ahmet") ,human(190,"can")};
   vector<human> v2 = {human(140,"fatma"), human(150,"ayse") ,human(160,"selin"), human(), human(), human()};
    - Call the `CopyValues()` function to modify `v1` and `v2`.
    - Print the contents of `v1` and `v2` using the `display()` member function of the `human` class.


 ![image](https://github.com/Joseph0grcn/valueTransfer/assets/92579500/7e862ddc-248d-4f1a-a1b4-665fb6b1a488)






