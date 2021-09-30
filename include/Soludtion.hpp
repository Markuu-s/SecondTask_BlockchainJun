#ifndef SOLUTION
#define SOLUTION

#include <string>
#include <map>
#include <vector>

class Solution
{
public:
    struct Data
    {
        std::string name;
        int requestsHour;
        int countHour;
        std::vector<std::string> additionalInf;
    };

    std::map<std::string, Data> getInformation();
    void solve();

private:
    std::map<std::string, Data> table;

    void isExist(const Data& data);
};

#endif // SOLUTION
