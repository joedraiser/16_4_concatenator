#include <iostream>
#include <string>

int main()
{
    std::string integer;
    std::cout << "Input num integer part: ";
    std::cin >> integer;

    std::string fractional;
    std::cout << "Input num fractional part: ";
    std::cin >> fractional;

    std::string resultNum;
    resultNum+=integer+'.'+fractional;

    std::cout << std::stod(resultNum);
}
