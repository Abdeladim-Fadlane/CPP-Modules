#ifndef FIXED_HPP
#define FIXED_HPP
#endif
#include <iostream>
class Fixed
{
    private:
        int numberValue;
        static const int numberFranctional = 8;
    public:
        Fixed();
        Fixed(const Fixed& obj);
        Fixed& operator=(const Fixed& obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};