//
// Created by Морозова Арина on 09.12.2022.
//

#include "String.hpp"


String::String(){
    _str= nullptr;
}

String::String(const char *str) {
    _length= strlen(str);
    str = new char [_length+1];
    for (int i=0;i<_length;i++){
        _str[i]=str[i];
    }
    _str[_length]='/0';

}

String::String(const String &str) {
    _length= strlen(str._str);
    this->_str = new char [_length+1];
    for (int i=0;i<_length;i++){
       this->_str[i]=str._str[i];
    }
   this-> _str[_length]='/0';
}


String::String(String &&str) noexcept {
    this->_length=str._length;
    this->_str=str._str;
    str._length = 0;
    str._str = nullptr;
}
String::~String() {

    delete[] _str;
}

char &String::operator[](int index) {

    return _str[index];

}
String String::operator+(const String &str) {
    String Newstr;
    int thisLength = strlen(this->_str);
    int otherLength = strlen(str._str);
    Newstr._length = thisLength + otherLength;
    Newstr._str = new char[thisLength + otherLength + 1];
    int i=0;
    for (i; i < thisLength; i++)
    {
        Newstr._str[i] = this->_str[i];
    }

    for (int j = 0; j < otherLength; j++,i++)
    {
        Newstr._str[i] = str._str[j];
    }

    Newstr._str[thisLength + otherLength] = '\0';
    return Newstr;

}

void String::append(const char *str) {
    _length+= strlen(str);
    char * tmp= new char [_length+1];
    strcpy(tmp,_str);
    strcat(tmp,str);
    delete[] _str;
    _str = tmp;
}
void String::append(const String &str) {
    _length += str._length;
    char *tmp = new char[_length + 1];
    strcpy(tmp, _str);
    strcat(tmp, str._str);
    delete[] _str;
    _str = tmp;

}
const char*String::c_str(){
    return _str;
}










