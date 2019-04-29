#ifndef __BASE_CPP__
#define __BASE_CPP__

#ifdef IMPLEMENTATION
#define __BASE_CPP__IMPLEMENTATION__
#undef IMPLMENTATION
#endif

#include <string>

class Base
{
    public:
        virtual ~Base() = default;
        virtual std::string GetWord() = 0;
};

#endif