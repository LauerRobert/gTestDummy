#include "myclass.hpp"
#include "myfunction.hpp"

int main()
{
   std::int32_t input{7};
   std::cout << "Test output: " << myFunction(input) << '\n';

   // MyClass my_class1{};
   // MyClass my_class2{1};

   // std::cout << "Test output: " << my_class2.getValue() << '\n';

   return 0;
}
