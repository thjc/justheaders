#ifndef SECOND_CPP
#define SECOND_CPP

#ifdef IMPLEMENTATION
#define SECOND_CPP_IMPLEMENTATION
#undef IMPLEMENTATION
#endif

#include "utterance.cpp"

class Second : public Utterance
{
    public:
        Second() {}
        std::string GetWord() override
        {
            return word;
        }

    private:
        static std::string word;
};

#ifdef SECOND_CPP_IMPLEMENTATION
std::string Second::word = "World";
#endif

#endif