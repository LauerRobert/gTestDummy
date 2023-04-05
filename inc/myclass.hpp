#include <iostream>

struct MyClass
{
   MyClass() = default;

   MyClass(int input)
       : m_int(input)
   {
      std::cout << "Hello, world!\n";
   };

   int getValue();

   void setValue(int desiredValue);

   int m_int{3};
};
