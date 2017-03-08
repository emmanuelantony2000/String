//version 1.2.3(Beta)
//Author: Emmanuel Antony

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class String;

int strLength(char str[500]);
int strLengthNormal(char s[]);
void strAdd(char str[500], char temp[500]);
void strCopy(char a[500], char b[500]);
void strFlush(char a[500]);
void strInitialise(char str[500], char s[]);
void strMultiply(String& s, int n);
String strReplace(String o, String n, String s);
int strEqual(String a, String b);
void strSubstring(char c1[500], char c2[500], int a, int b);
int strInstance(String a, String b);
int strFirstIndexChar(String s, char c);
int strLastIndexChar(String s, char c);
void strIndexesChar(String s, char c, int n[]);
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
String strChange(int start, int end, String a, String b);
int charIsInteger(char c);
int charIsAlphabet(char c);
int charIsSpecial(c);
int charIsAlphanumeric(char c);
int charIsLower(char c);
int charIsUpper(char c);
int charToInteger(char c);
char charToLower(char c);
char charToUpper(char c);

class String
{
private:
    char str[500];

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

    String replace(char o, char n)
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

    String replace(char o[], char n[])
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

    String replace(char o, char n[])
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

    String replace(char o[], char n)
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

    String replace(String o, char n)
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

    String replace(String o, char n[])
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

    String replace(char o, String n)
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

    String replace(char o[], String n)
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

    String replace(String o, String n)
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

    String change(int n, char c)
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

    String change(int a, int b, char c[])
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

    String change(int a, int b, String s)
    {
        String s;
        s = (*this);
        s.change(a, b, s);
        return s;
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

    void firstIndex(char c[])
    {
        String s(c);
        return strFirstIndex((*this), s);
    }

    void firstIndex(String s)
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
        return strLastIndex((*this), s``);
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

    String reverse()
    {
        String s;
        s = (*this);
        s.reverse();
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

    String toLower()
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

    String toUpper()
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

    String capitalize()
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

    String decapitalize()
    {
        String s;
        s = (*this);
        s.decapitalize();
        return s;
    }

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

    char operator [] (int n)
    {
        return this->str[i];
    }
};

int strLength(char str[500])
{
    for(int i = 0; str[i] != '\0'; i++);
    return i;
}

int strLengthNormal(char s[])
{
    for(int i = 0; s[i] != '\0'; i++);
    return i;
}

void strAdd(char str[500], char temp[500])
{
    int i, j = strLength(str);
    for(i = 0; temp[i] != '\0'; i++)
    {
        str[i + j] = temp[i];
    }
}

void strCopy(char a[500], char b[500])
{
    strFlush(a);
    for(int i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
}

void strFlush(char a[500])
{
    for(int i = 0; i < 500; i++)
    {
        a[i] = '\0';
    }
}

void strInitialise(char str[500], char s[])
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
            i = i + j;
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

void strSubstring(char c1[500], char c2[500], int a, int b)
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
        if(s.substring(i, i + j) == b)
        {
            return i;
        }
    }
    return -1;
}

int strLastIndex(String a, String b)
{
    int i, j = b.length();
    for(int i = a.length() - j; i >= 0; i--)
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
            n = (n * bd) + (charToInteger(s.charAt(i))) * ad);
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
            if(charisLower(s.charAt(i)))
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
            if(charisUpper(s.charAt(i)))
            {
                s.change(i, charToLower(s.charAt(i)));
            }
        }
    }
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

String strTrimSpace(String s)
{
    String result;
    result = "";
    for(int i = 0; i < s.length(); i++)
    {
        if(s.charAt(i) == ' ')
        {
            continue;
        }
        result += s.charAt(i);
    }
    return result;
}

String strTrimSpecified(String a, String b)
{

}

String[] strSeparate(String a, String b)
{

}

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

int charIsSpecial(c)
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
    return (char)(c + 32)
}

char charToUpper(char c)
{
    return (char)(c - 32)
}

void main()
{
    String s1, s2, s3;
    //s1.input();
    //s2.input();
    cin>>s1;
    cin>>s2;
    s3 += s1 + " " + s2;
    cout<<s3;
    getch();
}
