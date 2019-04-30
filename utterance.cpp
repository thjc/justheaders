#ifndef UTTERANCE_CPP
#define UTTERANCE_CPP

#ifdef IMPLEMENTATION
#define UTTERANCE_CPP_IMPLEMENTATION__
#undef IMPLEMENTATION
#endif

#include <string>

class Utterance
{
    public:
        virtual ~Utterance() = default;
        virtual std::string GetWord() = 0;
};

#endif