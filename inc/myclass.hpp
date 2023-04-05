#include <cstdint>

struct MyClass
{
   MyClass() = default;

   MyClass(int32_t input)
       : m_int(input)
   {};

   int32_t getValue() const;

   void setValue(const int32_t desiredValue);

   int32_t m_int{3};
};
