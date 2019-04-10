#include <iostream>

template <typename T>
inline T const& Max (T const& a, T const& b)
{
return a < b ? b:a;
}
template <typename T>
inline T const& Min (T const& a, T const& b)
{
return a > b ? b:a;
}

int main()
{
std::cout<<"Max(420, 69) is: "<< Max(420,69) <<std::endl;
std::cout<<"Max(-420, -69) is: "<< Max(-420,-69) <<std::endl;
std::cout<<"Max(420.420, 69.69) is: "<< Max(420.420,69.69) <<std::endl;
std::cout<<"Max(canada, Canada) is: "<< Max("canada","Canada") <<std::endl;
  
std::cout<<"Min(420, 69) is: "<< Min(420,69) <<std::endl;
std::cout<<"Min(-420, -69) is: "<< Min(-420,-69) <<std::endl;
std::cout<<"Min(420.420, 69.69) is: "<< Min(420.420,69.69) <<std::endl;
std::cout<<"Min(canada, Canada) is: "<< Min("canada","Canada") <<std::endl;
}