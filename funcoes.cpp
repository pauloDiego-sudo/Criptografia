#include "funcoes.hpp"
string encriptar(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        switch(str[i])
        {
        case 'a':
            str[i]='1';
            break;
        case 'e':
            str[i]='2';
            break;
        case 'i':
            str[i]='3';
            break;
        case 'o':
            str[i]='4';
            break;
        case 'u':
            str[i]='5';
            break;
        case 'A':
            str[i]='6';
            break;
        case 'E':
            str[i]='7';
            break;
        case 'I':
            str[i]='8';
            break;
        case 'O':
            str[i]='9';
            break;
        case 'U':
            str[i]='0';
            break;
        }
    }
    return str;
}