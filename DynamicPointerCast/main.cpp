#include <iostream>
#include <memory>

class Base {
 public:
  virtual void Foo() { std::cout << "Base::Foo\n"; }
};

class Derived : public Base {
 public:
  void Foo() override { std::cout << "Derived::Foo\n"; }
  void Bar() { std::cout << "Derived::Bar\n"; }
};

int main() {
  std::shared_ptr<Base> base_ptr = std::make_shared<Derived>();

  // Dynamic cast from Base to Derived
  std::shared_ptr<Derived> derived_ptr =
      std::dynamic_pointer_cast<Derived>(base_ptr);

  if (derived_ptr) {
    derived_ptr->Bar();
  } else {
    std::cout << "Failed to cast\n";
  }

  return 0;
}
