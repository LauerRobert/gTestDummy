#include "myfunction.hpp"

std::int32_t myFunction(const std::int32_t input)
{
   std::int32_t output{0};

   if (input < 0)
   {
      output = -1;
   }
   else if (input > 0)
   {
      output = 1;
   }

   return output;
}