#ifndef SWEET_LALR_LALRACTION_HPP_INCLUDED
#define SWEET_LALR_LALRACTION_HPP_INCLUDED

#include <string>

namespace sweet
{

namespace lalr
{

/**
// An action that is attached to a %parser reduction.
*/
class LalrAction
{
    public:
        static const int INVALID_INDEX = -1;

        int index; ///< The index of this action.
        const char* identifier; ///< The identifier of this action.
    
        LalrAction( int iindex, const char* iidentifier );
        void destroy();
};

}

}

#endif
