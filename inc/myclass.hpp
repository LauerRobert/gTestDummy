#include <cstdint>
#include "gtest/gtest.h"

struct MyClass
{
   MyClass() = default;

   MyClass(int32_t input)
       : m_int(input)
   {};

   bool operator== (const MyClass& other) const;

   int32_t getValue() const;

   void setValue(const int32_t desiredValue);

private:
   void increase(const int32_t increment);

public:
   int32_t m_int{3};

private:
   FRIEND_TEST(MyClassTest, incrementWorksPrivate);
};
