#include "myclass.hpp"

namespace MyClass
{
int MyClass::getValue()
{
   return m_int;
}


void setValue(int desiredValue)
{
   m_int = desiredValue;
}
}