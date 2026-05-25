# Constructors Example

This project demonstrates a **default constructor** in C++ using a simple `Student` class.

## What the code does

In `main.cpp`, the `Student` class stores two pieces of data:

- `name` — a `string`
- `age` — an `int`

These are declared as `private`, which means they cannot be changed directly from outside the class.

## Default constructor

The class has a **default constructor**:

```cpp
Student() {
	name = "Unknown";
	age = 0;

	cout << "Default constructor called" << endl;
}
```

This constructor runs automatically when an object is created without passing any values.

### What it does

- sets `name` to `"Unknown"`
- sets `age` to `0`
- prints `Default constructor called`

## Object creation in `main()`

```cpp
Student s1;
```

This line creates a `Student` object named `s1`. Because no values are provided, the default constructor is called.

## Display function

The `display()` function prints the stored values:

```cpp
void display() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
```

After `s1` is created, `s1.display();` shows the values set by the constructor.

## Expected output

When you run the program, the output should look like this:

```text
Default constructor called
Name: Unknown
Age: 0
```

## Summary

This example shows how a default constructor:

1. runs automatically when an object is created
2. gives member variables initial values
3. helps keep objects in a valid state from the start

It is a good starting point for learning object-oriented programming in C++.
