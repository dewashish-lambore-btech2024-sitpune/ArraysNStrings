
# Experiment 7: Exploring Arrays and Strings in C++

---

## Objective

The purpose of this experiment is to gain hands-on experience with arrays and C-style strings in C++. You'll learn how to accept user inputs, store them efficiently in arrays, and perform various operations like searching, finding the maximum and minimum, and computing the sum and average. Additionally, this experiment introduces manipulation of strings using built-in functions from the C++ standard library.

---

## Development Environment

- Tool: Visual Studio Code (VS Code)
- Language: C++

---

## Learning Outcomes

- Understand how arrays are structured and how they function in C++.
- Use arrays to store numeric data and apply basic operations such as search, max/min, sum, and average.
- Work with C-style strings and use common functions such as copying, comparing, and concatenating strings.
- Apply conditional statements and loop structures for logic implementation.
- Validate user input to avoid memory overflows and unexpected behaviors.

---

## Theoretical Background

### Arrays

Arrays are fixed-size containers used to store elements of the same data type. They allow fast access through index values and are useful for managing structured data in a sequential manner. Their primary features include:

- Static memory allocation
- Index-based access starting from zero
- Compatibility with loops for data processing

Arrays are especially useful in scenarios such as statistical analysis, gaming (e.g., scores, states), buffer handling in communication systems, and sensor data processing in embedded systems.

### Strings

C-style strings in C++ are essentially arrays of characters ending with a null terminator (`\0`). String operations are supported through functions provided in the `<cstring>` library. These include:

- Measuring string length
- Copying one string to another
- Concatenating two strings
- Comparing strings for equality
- Searching for characters or substrings

Strings are widely used in areas such as user data management, text-based interfaces, communication protocols, and file system navigation.

---

## Key Concepts Implemented

- Accepting and validating array input (within a limit of 20 elements).
- Displaying array contents using loops.
- Computing the maximum and minimum values in an array.
- Searching for a particular element using linear search.
- Calculating the sum and average of array elements.
- Performing basic operations on C-style strings (length, copy, concat, compare).

---

## Sample Scenarios Covered

1. **Input Validation**  
   Ensuring the number of elements entered does not exceed the declared array size.

2. **Array Traversal**  
   Looping through array elements to display or process them.

3. **Max/Min Operations**  
   Allowing the user to choose between computing the largest or smallest number.

4. **Searching**  
   Prompting the user for a target number and locating it in the array.

5. **Sum and Average**  
   Computing the total and mean of a fresh set of numbers provided by the user.

6. **String Manipulation**  
   Accepting two strings and performing operations like length checking, copying, concatenation, and comparison.

---

## Conclusion

By completing this lab, students gain fundamental skills in array and string handling, which are essential for problem-solving in C++. These concepts lay the foundation for more complex data structures and algorithms encountered in advanced programming.

