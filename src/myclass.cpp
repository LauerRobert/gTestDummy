#include "myclass.hpp"


int32_t MyClass::getValue() const
{
   return m_int;
}


void MyClass::setValue(const int32_t desiredValue)
{
   m_int = desiredValue;
}
