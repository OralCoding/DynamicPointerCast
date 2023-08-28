## Dynamic Pointer Casting in C++

This example demonstrates how to use `std::dynamic_pointer_cast` for safely casting a `shared_ptr` of a base class to a `shared_ptr` of a derived class.

### Explanation

1. **Polymorphism**: The code features two classes, `Base` and `Derived`. `Derived` is derived from `Base`, allowing objects of `Derived` to be handled through a `Base` pointer.

2. **Smart Pointers**: The `std::shared_ptr` is used to automatically manage memory.

3. **Dynamic Casting**: `std::dynamic_pointer_cast` allows for safe casting from `Base` type `shared_ptr` to `Derived` type `shared_ptr` during runtime.

#### Real-world Use Cases

1. **Plugin Architecture**: This is useful when managing different types of objects in a uniform manner but calling special methods conditionally based on their types.

2. **Graphics Systems**: Useful when various graphic objects (e.g., shapes, text) need to be handled uniformly, but specific operations need to be applied depending on their type.

3. **Component-Based Design**: Useful when handling different types of components in a uniform manner, but need to apply specific operations only to certain types.

Using `std::dynamic_pointer_cast` allows safe failure as it returns `nullptr` if the casting fails, thereby allowing for robust runtime error handling.
