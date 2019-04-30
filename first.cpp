#ifndef FIRST_CPP
#define FIRST_CPP

#ifdef IMPLEMENTATION
#define FIRST_CPP_IMPLEMENTATION
#undef IMPLEMENTATION
#endif

#include "utterance.cpp"
#include <string>

class First : public Utterance
{
    public:
        First() : word("Hello") {}
        std::string GetWord() override
        {
            return word;
        }

    private:
        std::string word;
};

#endif