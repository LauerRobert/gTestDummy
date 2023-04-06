#include "myclass.hpp"


bool MyClass::operator== (const MyClass& other) const
{
   return (m_int == other.m_int);
}

int32_t MyClass::getValue() const
{
   return m_int;
}


void MyClass::setValue(const int32_t desiredValue)
{
   m_int = desiredValue;
}

void MyClass::increase(const int32_t increment)
{
   m_int += increment;
}