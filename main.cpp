#include "Soludtion.hpp"
#include <iostream>

int main()
{
    freopen("../tests/output.txt", "w", stdout);
    
    Solution a;
    a.solve("../tests/input1.txt");
    for(auto& u : a.getInformation())
    {
        std::cout << u.second.name << ' ' << u.second.requestsHour << ' ' << u.second.countHour << ' ' << u.second.countHour * u.second.requestsHour << ' ';
        for(auto& r : u.second.additionalInf)
        {
            std::cout << r << ' ';
        }
        std::cout << '\n';
    }
}