#ifndef _COUPLE_H_
#define _COUPLE_H_

using namespace std;

template<typename ValType>
class TCouple
{
public:
    char var;
    ValType value;

    TCouple()
    {
        var = 0;
        value = 0;
    }
};

#endif