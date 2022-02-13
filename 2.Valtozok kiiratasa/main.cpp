#include <iostream>

using namespace std;

int main() {
    	char char1 = 'a';	// Exactly one byte in size. At least 8 bits.
        char16_t char2 = 'b';	//Not smaller than char. At least 16 bits.
        char32_t char3 = 'c';	//Not smaller than char16_t. At least 32 bits.
        signed char	 char5 = 'a' ;//Same size as char. At least 8 bits.
        signed short int szam1 = 1;	//Not smaller than char. At least 16 bits.
        signed int szam2 = 2;	//Not smaller than short. At least 16 bits.
        signed long int	szam3 = 3; //Not smaller than int. At least 32 bits.
        signed long long int szam4 = 4;	//Not smaller than long. At least 64 bits.
        unsigned short int szam5 = 1;	//same size as their signed counterpart
        unsigned int szam6 = 2;	//same size as their signed counterpart
        unsigned long int	szam7 = 3; //same size as their signed counterpart
        unsigned long long int szam8 = 4;	//same size as their signed counterpart
        float f = 3.14;
        double d1 = 3.0 ; //	Precision not less than float
        long double	d2 = 3.111;  //Precision not less than double
        bool boolean = true; 
}