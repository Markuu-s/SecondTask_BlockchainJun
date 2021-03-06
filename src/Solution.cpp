#include <Soludtion.hpp>
#include <iostream>

std::map<std::string, Solution::Data> Solution::getInformation()
{
    return table;
}

void Solution::isExist(const Data &data)
{
    table[data.name].requestsHour += data.requestsHour;
    table[data.name].countHour += data.countHour;
    table[data.name].additionalInf.push_back(data.additionalInf[0]);
}

void Solution::solve(std::string pathToInput)
{
    freopen(pathToInput.data(), "r", stdin);

    Data data;
    data.additionalInf.resize(1);
    while (std::cin >> data.name)
    {
        std::cin >> data.requestsHour >> data.countHour >> data.additionalInf[0];

        if (table.find(data.name) == table.end())
        {
            table[data.name] = data;
        }
        else
        {
            isExist(data);
        }
    }
}
