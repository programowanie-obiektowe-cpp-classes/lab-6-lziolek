#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    // Twoja implementacja tutaj
    size_t i=0;
    std::for_each(people.rbegin(),people.rend(),[&](Human& p) {p.birthday(); retval[i++]=(p.isMonster()? 'n' : 'y');});
       return retval;

}
