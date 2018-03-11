#ifndef SWEET_LALR_PARSERERRORPOLICY_HPP_INCLUDED
#define SWEET_LALR_PARSERERRORPOLICY_HPP_INCLUDED

#include <stdarg.h>

namespace sweet
{

namespace error
{

class Error;

}

namespace lalr
{

/**
// An interface to be implemented by classes that wish to be notified of
// errors and %debug information from the %parser library.
*/
class ParserErrorPolicy
{
    public:
        virtual ~ParserErrorPolicy();
        virtual void parser_error( int line, int error, const char* format, va_list args );
        virtual void parser_vprintf( const char* format, va_list args );
};

}

}

#endif
