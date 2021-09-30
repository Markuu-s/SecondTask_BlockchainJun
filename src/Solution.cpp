#include <Soludtion.hpp>

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
