//version 1.3.1(Beta)-Header File
//Author: Emmanuel Antony

#include<iostream.h>
#include<stdio.h>

const int charLengthConstant = 500;

class String;

int strLength(char str[charLengthConstant]);
int strLengthNormal(char s[]);
void strAdd(char str[charLengthConstant], char temp[charLengthConstant]);
void strCopy(char a[charLengthConstant], char b[charLengthConstant]);
void strFlush(char a[charLengthConstant]);
void strInitialise(char str[charLengthConstant], char s[]);
void strMultiply(String& s, int n);
String strReplace(String o, String n, String s);
int strEqual(String a, String b);
void strSubstring(char c1[charLengthConstant], char c2[charLengthConstant], int a, int b);
int strInstance(String a, String b);
int strFirstIndex(String a, String b);
int strLastIndex(String a, String b);
void strIndexes(String a, String b, int n[]);
String strIntToChar(int n);
int strParseInt(String s);
double strParseDouble(String s);
int strIsInteger(String s);
int strIsDouble(String s);
int strIsAlphabet(String s);
int strIsAlphanumeric(String s);
int strIsLower(String s);
int strIsUpper(String s);
void strToLower(String& s);
void strToUpper(String& s);
void strCapitalize(String& s);
void strDecapitalize(String& s);
void strReverse(String& s);
String strChange(int start, int end, String a, String b);
String strTrim(String s);
String strTrimSpecified(String a, String b);
//String[] strSeparate(String a, String b);
int charIsInteger(char c);
int charIsAlphabet(char c);
int charIsSpecial(char c);
int charIsAlphanumeric(char c);
int charIsLower(char c);
int charIsUpper(char c);
int charToInteger(char c);
char charToLower(char c);
char charToUpper(char c);

class String
{
private:
    char str[charLengthConstant];

public:
    String()
    {
        strFlush(this->str);
    }

    String(char c[])
    {
        (*this).initialise(c);
    }

    String(char c)
    {
        (*this).initialise(c);
    }

    String(int n)
    {
        (*this).initialise(n);
    }

    void initialise(char c[])
    {
        strFlush(this->str);
        strInitialise(this->str, c);
    }

    void initialise(char c)
    {
        strFlush(this->str);
        this->str[0] = c;
    }

    void initialise(int n)
    {
        strFlush(this->str);
        (*this) = strIntToChar(n);
    }

    void flush()
    {
        strFlush(this->str);
    }

    void input()
    {
        strFlush(this->str);
        gets(this->str);
    }

    void output()
    {
        puts(this->str);
    }

    int length()
    {
        return strLength(str);
    }

    char charAt(int i)
    {
        return this->str[i];
    }

    void replace(char oldChar, char newChar)
    {
        String o(oldChar), n(newChar);
        (*this) = strReplace(o, n, (*this));
    }

    String replace(char o, char n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(char oldChar[], char newChar[])
    {
        String o(oldChar), n(newChar);
        (*this) = strReplace(o, n, (*this));
    }

    String replace(char o[], char n[], int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(char oldChar, char newChar[])
    {
        String o(oldChar), n(newChar);
        (*this) = strReplace(o, n, (*this));
    }

    String replace(char o, char n[], int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(char oldChar[], char newChar)
    {
        String o(oldChar), n(newChar);
        (*this) = strReplace(o, n, (*this));
    }

    String replace(char o[], char n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(String oldChar, char newChar)
    {
        String n(newChar);
        (*this) = strReplace(oldChar, n, (*this));
    }

    String replace(String o, char n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(String oldChar, char newChar[])
    {
        String n(newChar);
        (*this) = strReplace(oldChar, n, (*this));
    }

    String replace(String o, char n[], int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(char oldChar, String newChar)
    {
        String o(oldChar);
        (*this) = strReplace(o, newChar, (*this));
    }

    String replace(char o, String n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(char oldChar[], String newChar)
    {
        String o(oldChar);
        (*this) = strReplace(o, newChar, (*this));
    }

    String replace(char o[], String n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void replace(String oldChar, String newChar)
    {
        (*this) = strReplace(oldChar, newChar, (*this));
    }

    String replace(String o, String n, int num)
    {
        String s;
        s = (*this);
        s.replace(o, n);
        return s;
    }

    void change(int n, char c)
    {
        this->str[n] = c;
    }

    String change(int n, char c, int num)
    {
        String s;
        s = (*this);
        s.change(n, c);
        return s;
    }

    void change(int a, int b, char c[])
    {
        String s;
        s.initialise(c);
        (*this) = strChange(a, b, (*this), s);
    }

    String change(int a, int b, char c[], int n)
    {
        String s;
        s = (*this);
        s.change(a, b, c);
        return s;
    }

    void change(int a, int b, String s)
    {
        (*this) = strChange(a, b, (*this), s);
    }

    String change(int a, int b, String s, int n)
    {
        String r;
        r = (*this);
        r.change(a, b, s);
        return r;
    }

    int instance(char c)
    {
        String s(c);
        return strInstance((*this), s);
    }

    int instance(char c[])
    {
        String s(c);
        return strInstance((*this), s);
    }

    int instance(String s)
    {
        return strInstance((*this), s);
    }

    int firstIndex(char c)
    {
        String s(c);
        return strFirstIndex((*this), s);
    }

    int firstIndex(char c[])
    {
        String s(c);
        return strFirstIndex((*this), s);
    }

    int firstIndex(String s)
    {
        return strFirstIndex((*this), s);
    }

    int lastIndex(char c)
    {
        String s(c);
        return strLastIndex((*this), s);
    }

    int lastIndex(char c[])
    {
        String s(c);
        return strLastIndex((*this), s);
    }

    int lastIndex(String s)
    {
        return strLastIndex((*this), s);
    }

    void indexes(char c, int n[])
    {
        String s(c);
        strIndexes((*this), s, n);
    }

    void indexes(char c[], int n[])
    {
        String s(c);
        strIndexes((*this), s, n);
    }

    void indexes(String s, int n[])
    {
        strIndexes((*this), s, n);
    }

    void reverse()
    {
        strReverse((*this));
    }

    String reverse(int n)
    {
        String s;
        s = (*this);
        s.reverse();
        return s;
    }

    void trim()
    {
        (*this) = strTrim(*this);
    }

    String trim(int n)
    {
        String s;
        s = strTrim(*this);
        return s;
    }

    void trimSpecified(String s)
    {
        (*this) = strTrimSpecified((*this), s);
    }

    String trimSpecified(String r, int n)
    {
        String s;
        s = strTrimSpecified((*this), r);
        return s;
    }

    int parseInt()
    {
        return strParseInt((*this));
    }

    double parseDouble()
    {
        return strParseDouble((*this));
    }

    String substring(int a, int b)
    {
        String s;
        strSubstring(this->str, s.str, a, b);
        return s;
    }

    int isInteger()
    {
        return strIsInteger((*this));
    }

    int isDouble()
    {
        return strIsDouble((*this));
    }

    int isAlphabet()
    {
        return strIsAlphabet((*this));
    }

    int isAlphanumeric()
    {
        return strIsAlphanumeric((*this));
    }

    int isLower()
    {
        return strIsLower((*this));
    }

    int isUpper()
    {
        return strIsUpper((*this));
    }

    void toLower()
    {
        strToLower((*this));
    }

    String toLower(int n)
    {
        String s;
        s = (*this);
        s.toLower();
        return s;
    }

    void toUpper()
    {
        strToUpper((*this));
    }

    String toUpper(int n)
    {
        String s;
        s = (*this);
        s.toLower();
        return s;
    }

    void capitalize()
    {
        strCapitalize((*this));
    }

    String capitalize(int n)
    {
        String s;
        s = (*this);
        s.capitalize();
        return s;
    }

    void decapitalize()
    {
        strDecapitalize((*this));
    }

    String decapitalize(int n)
    {
        String s;
        s = (*this);
        s.decapitalize();
        return s;
    }

    /*
    void separate(String s, String result[], int n)
    {
        String temp[] = strSeparate((*this), s);
        for(int i = 0; i < n; i++)
        {
            result[i] = temp[i];
        }
    }
    */

    String& operator = (String& temp)
    {
        strCopy(this->str, temp.str);
        return (*this);
    }

    String& operator = (char temp[])
    {
        String s;
        s.initialise(temp);
        (*this) = s;
        return (*this);
    }

    String& operator = (char temp)
    {
        String s;
        s.initialise(temp);
        (*this) = s;
        return (*this);
    }

    String& operator += (String& temp)
    {
        strAdd(this->str, temp.str);
        return (*this);
    }

    String& operator += (char temp[])
    {
        String s;
        s.initialise(temp);
        (*this) += s;
        return (*this);
    }

    String& operator += (char temp)
    {
        String s;
        s.initialise(temp);
        (*this) += s;
        return (*this);
    }

    String& operator + (String& temp)
    {
        (*this) += temp;
        return (*this);
    }

    String& operator + (char temp[])
    {
        String s;
        s.initialise(temp);
        (*this) += s;
        return (*this);
    }

    String& operator + (char temp)
    {
        String s;
        s.initialise(temp);
        (*this) += s;
        return (*this);
    }

    friend String operator + (char temp, String s)
    {
        String r;
        r.initialise(temp);
        s = r + s;
        return s;
    }

    friend String operator + (char temp[], String s)
    {
        String r;
        r.initialise(temp);
        s = r + s;
        return s;
    }

    String& operator * (int n)
    {
        strMultiply((*this), n);
        return (*this);
    }

    friend String operator * (int n, String s)
    {
        strMultiply(s, n);
        return s;
    }

    friend ostream& operator << (ostream& output, String& s)
    {
        puts(s.str);
        return output;
    }

    friend istream& operator >> (istream& input, String& s)
    {
        strFlush(s.str);
        gets(s.str);
        return input;
    }

    int operator == (String s)
    {
        return strEqual((*this), s);
    }

    int operator == (char c[])
    {
        String s;
        s.initialise(c);
        return strEqual((*this), s);
    }

    int operator == (char c)
    {
        String s;
        s.initialise(c);
        return strEqual((*this), s);
    }

    int operator != (String s)
    {
        if((*this) == s)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int operator != (char c[])
    {
        if((*this) == c)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    int operator != (char c)
    {
        if((*this) == c)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    friend operator == (char c[], String temp)
    {
        String s;
        s.initialise(c);
        return strEqual(temp, s);
    }

    friend operator == (char c, String temp)
    {
        String s;
        s.initialise(c);
        return strEqual(temp, s);
    }

    friend operator != (char c[], String temp)
    {
        if(c == temp)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    friend operator != (char c, String temp)
    {
        if(c == temp)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }

    char operator [] (int n)
    {
        return this->str[n];
    }
};

int strLength(char str[charLengthConstant])
{
    for(int i = 0; str[i] != '\0'; i++);
    return i;
}

int strLengthNormal(char s[])
{
    for(int i = 0; s[i] != '\0'; i++);
    return i;
}

void strAdd(char str[charLengthConstant], char temp[charLengthConstant])
{
    int i, j = strLength(str);
    for(i = 0; temp[i] != '\0'; i++)
    {
        str[i + j] = temp[i];
    }
}

void strCopy(char a[charLengthConstant], char b[charLengthConstant])
{
    strFlush(a);
    for(int i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
}

void strFlush(char a[charLengthConstant])
{
    for(int i = 0; i < charLengthConstant; i++)
    {
        a[i] = '\0';
    }
}

/*
void strArrayFlush(String s[], int n)
{
    for(int i = 0; i < n; i++)
    {
        s[i].flush();
    }
}
*/

void strInitialise(char str[charLengthConstant], char s[])
{
    strFlush(str);
    for(int i = 0; s[i] != '\0'; i++)
    {
        str[i] = s[i];
    }
}

void strMultiply(String& s, int n)
{
    String temp;
    temp = s;
    for(int i = 1; i < n; i++)
    {
        s += temp;
    }
}

String strReplace(String o, String n, String s)
{
    String r;
    int i, j = o.length();
    for(i = 0; i < s.length(); i++)
    {
        if((s.substring(i, i + j) == o) && (i < s.length() - j))
        {
            r += n;
            i = i + j - 1;
        }
        else
        {
            r += s.charAt(i);
        }
    }
    return r;
}

int strEqual(String a, String b)
{
    for(int i = 0; i < a.length(); i++)
    {
        if(a.charAt(i) != b.charAt(i))
        {
            return 0;
        }
    }
    return 1;
}

void strSubstring(char c1[charLengthConstant], char c2[charLengthConstant], int a, int b)
{
    int i, j = 0;
    for(i = a; i < b; i++)
    {
        c2[j] = c1[i];
        j++;
    }
}

int strInstance(String a, String b)
{
    int i, j = b.length(), k = 0;
    for(i = 0; i < a.length() - j; i++)
    {
        if(a.substring(i, i+j) == b)
        {
            k++;
        }
    }
    return k;
}

int strFirstIndex(String a, String b)
{
    int i, j = b.length();
    for(i = 0; i < a.length() - j; i++)
    {
        if(a.substring(i, i + j) == b)
        {
            return i;
        }
    }
    return -1;
}

int strLastIndex(String a, String b)
{
    int i, j = b.length();
    for(i = a.length() - j; i >= 0; i--)
    {
        if(a.substring(i - j, i) == b)
        {
            return i;
        }
    }
    return -1;
}

void strIndexes(String a, String b, int n[])
{
    int i, j = b.length(), count = 0;
    for(i = 0; i < a.length() - j; i++)
    {
        if(a.substring(i, i + j) == b)
        {
            n[count] = i;
            count++;
        }
    }
}

String strIntToChar(int n)
{
    String result;
    result = "";
    while(n != 0)
    {
        result = ((char)(48 + (n % 10))) + result;
        n = n / 10;
    }
    return result;
}

int strParseInt(String s)
{
    if(s.isInteger() == 0)
    {
        return -9999;
    }
    else
    {
        int i, n = 0;
        for(i = 0; i < s.length(); i++)
        {
            n = (n * 10) + (charToInteger(s.charAt(i)));
        }
        return n;
    }
}

double strParseDouble(String s)
{
    if(s.isDouble() == 0)
    {
        return -9999;
    }
    else
    {
        double n = 0, bd = 10, ad = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == '.')
            {
                bd = 1;
                ad = 0.1;
                continue;
            }
            n = (n * bd) + (charToInteger(s.charAt(i)) * ad);
            ad = ad * ad;
        }
        return n;
    }
}

int strIsInteger(String s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(!(charIsInteger(s.charAt(i))))
        {
            return 0;
        }
    }
    return 1;
}

int strIsDouble(String s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(!(charIsInteger(s.charAt(i)) || s.charAt(i) == '.'))
        {
            return 0;
        }
    }
    return 1;
}

int strIsAlphabet(String s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(!(charIsAlphabet(s.charAt(i)) || charIsSpecial(s.charAt(i))))
        {
            return 0;
        }
    }
    return 1;
}

int strIsAlphanumeric(String s)
{
    if(s.isAlphabet() || s.isInteger())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int strIsLower(String s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(charIsAlphabet(s.charAt(i)))
        {
            if(charIsUpper(s.charAt(i)))
            {
                return 0;
            }
        }
    }
    return 1;
}

int strIsUpper(String s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(charIsAlphabet(s.charAt(i)))
        {
            if(charIsLower(s.charAt(i)))
            {
                return 0;
            }
        }
    }
    return 1;
}

void strToLower(String& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(charIsUpper(s.charAt(i)))
        {
            s.change(i, charToLower(s.charAt(i)));
        }
    }
}

void strToUpper(String& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(charIsLower(s.charAt(i)))
        {
            s.change(i, charToUpper(s.charAt(i)));
        }
    }
}

void strCapitalize(String& s)
{
    if(charIsLower(s.charAt(0)))
    {
        s.change(0, charToUpper(s.charAt(0)));
    }
    for(int i = 1; i < s.length(); i++)
    {
        if(s.charAt(i - 1) == ' ')
        {
            if(charIsLower(s.charAt(i)))
            {
                s.change(i, charToUpper(s.charAt(i)));
            }
        }
    }
}

void strDecapitalize(String& s)
{
    if(charIsUpper(s.charAt(0)))
    {
        s.change(0, charToLower(s.charAt(0)));
    }
    for(int i = 1; i < s.length(); i++)
    {
        if(s.charAt(i - 1) == ' ')
        {
            if(charIsUpper(s.charAt(i)))
            {
                s.change(i, charToLower(s.charAt(i)));
            }
        }
    }
}

void strReverse(String& s)
{
    String result;
    result = "";
    for(int i = s.length() - 1; i >= 0; i--)
    {
        result += s.charAt(i);
    }
    s = result;
}

String strChange(int start, int end, String a, String b)
{
    String result;
    result = "";
    result += a.substring(0, start) + b + a.substring(end, a.length());
    return result;
}

String strTrim(String s)
{
    int i, j;
    for(i = 0; s.charAt(i) == ' '; i++);
    for(j = s.length() - 1; s.charAt(j) == ' '; j--);
    return s.substring(i, j + 1);
}

String strTrimSpecified(String a, String b)
{
    String result;
    result = a.replace(b, "", 0);
    return result;
}

/*
String[] strSeparate(String a, String b)
{
    String result[100], r;
    strArrayFlush(result, 100);
    r = "";
    int i, j = b.length(), count = 0;
    for(i = 0; i < a.length(); i++)
    {
        if(i < a.length() - j)
        {
            if(a.substring(i, i+j) == b)
            {
                result[count] = r;
                count++;
                r = "";
            }
            else
            {
                r += a.charAt(i);
            }
        }
        else
        {
            r += a.charAt(i);
        }
    }
    result[count] = r;
    return result;
}
*/

int charIsInteger(char c)
{
    if(c <= 57 && c >= 48)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charIsAlphabet(char c)
{
    if((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charIsSpecial(char c)
{
    if(c == '.' || c == '?' || c == '!' || c == ',')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charIsAlphanumeric(char c)
{
    if(charIsAlphabet(c) || charIsInteger(c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charIsLower(char c)
{
    if(c <= 122 && c >= 97)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charIsUpper(char c)
{
    if(c <= 90 && c >= 65)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int charToInteger(char c)
{
    return (int)(c - 48);
}

char charToLower(char c)
{
    return (char)(c + 32);
}

char charToUpper(char c)
{
    return (char)(c - 32);
}
