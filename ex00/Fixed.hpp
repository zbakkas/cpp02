

class Fixed
{
    private:
        int value;
        static const int fractional;
    public:
        Fixed();
        Fixed(const Fixed& fixed);
        Fixed& operator = (const Fixed& fixed);
        ~Fixed();
};

