#ifndef SAYER_CPP
#define SAYER_CPP

#ifdef IMPLEMENTATION
#define SAYER_CPP_IMPLEMENTATION
#undef IMPLEMENTATION
#endif

#ifdef SAYER_CPP_IMPLEMENTATION
#include "utterance.cpp"
#include <iostream>
#else
class Utterance;
#endif

class Sayer
{
    public:
        Sayer(Utterance & ut_) : ut(ut_) {}
        void Say()
        {
            std::cout << ut.GetWord();
        }

    private:
        Utterance &ut;
};

#endif