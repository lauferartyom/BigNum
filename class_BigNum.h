#include <iostream>
#include <ctime>
#include <stdbool.h>
#include <string.h>
#include <type_traits> 
#include <string>
#include <bitset>
#define BASE_SIZE (sizeof(BASE)*8)
#define MAX_BASE ((unsigned long long)1<<BASE_SIZE)

using namespace std;
//typedef unsigned short int BASE;
typedef unsigned short int BASE;
typedef conditional<BASE_SIZE<32,conditional<BASE_SIZE<16,unsigned short, unsigned int >::type, unsigned long long>::type TMP; 


class BigNum{
    public:
    BASE *coef;
    int maxLEN;
    int len;
    
        BigNum(int Len=1, bool k=0);
        BigNum(const BigNum &);
        ~BigNum(){delete[]coef; coef=NULL; len=0; maxLEN=0;}
        BigNum& operator = (const BigNum &);
        BigNum& operator = (const BASE);

        void HexInput(const char *);
        void HexOutput();

        bool operator == (const BigNum&);
        bool operator != (const BigNum&);
        bool operator >= (const BigNum&);
        bool operator <= (const BigNum&);
        bool operator > (const BigNum&);
        bool operator < (const BigNum&);

        BigNum operator + (const BigNum &);
        BigNum& operator += (const BigNum &);
        BigNum operator + (const BASE);
        BigNum& operator += (const BASE);

        BigNum operator - (const BASE);
        BigNum& operator -= (const BASE);
        BigNum operator - (const BigNum &);
        BigNum& operator -= (const BigNum &);

        BigNum operator * (const BigNum &);
        BigNum& operator *= (const BigNum &);
        BigNum operator * (const BASE);
        BigNum& operator *= (const BASE);

        BigNum operator /(const BASE);
        BigNum& operator /=(const BASE);
        BigNum operator /(const BigNum &);
        BigNum& operator /=(const BigNum &);

        BASE operator %(const BASE);
        BigNum& operator %=(const BASE);
        BigNum operator %(const BigNum &);
        BigNum& operator %=(const BigNum &);

        //friend ostream& operator << (ostream &, LargeNum&);
        //friend istream& operator >> (istream &, LargeNum&);

        void DecInput(const char *);
        void DecOutput();
        void PrintCoef();
        friend ostream & operator<< (ostream & out, const BigNum & bn);
    private:
        void ExpMaxLen(int);
        void NormLen();
        int SubLN(const BigNum&, int);
        void AddLN(const BigNum&, int);
        BigNum DivBN(const BASE , int);

};