#include <string>
//returns the bit size of the character
int getBits(char ch)
{
    
    int bits;
    int charNum = (int) ch;
    int remainder;
    for(bits = 0;charNum > 0;bits++)
    {
        remainder = charNum % 2;
        charNum = charNum / 2;
    }
    return bits;
}

std::string stringFlip(std::string str)
{
    int a;
    int b;
    char t;

    int length = str.length()-1;
    //checks if the string has an even length
    if(str.length() % 2 != 0 )
    {   
        for(a = 0; a != length / 2; a++)
        {
         t = str.at(a); 
         str.at(a) = str.at(length - a);
         str.at(length - a) = t;
        }
    }
    else
    {
        for(a = 0; a != str.length() / 2; a++)
        {
            t = str.at(a);
            str.at(a) = str.at(length - a);
            str.at(length - a) = t;
        }
    }
    return str;
}