//
// Created by Морозова Арина on 09.12.2022.
//

#include "String.hpp"


String::String() {

    str_ = nullptr;
    length_ = 0;
}

String::String(const char *str) {

    length_ = strlen(str);
    str_ = new char[length_ + 1];
    strcpy(str_, str);
}

String::String(const String &str) {

    length_ = str.length_;
    str_ = new char[length_ + 1];
    strcpy(str_, str.str_);
}


String::String(String &&str) noexcept {

        length_ = str.length_;
        str_ = str.str_;
        str.str_ = nullptr;
        str.length_ = 0;
}

String::~String() {

    delete[] str_;
}

char &String::operator[](int index) {

    return str_[index];

}

String String::operator+(const String &str) {

    String new_str;
    new_str.length_ = length_ + str.length_;
    new_str.str_ = new char[new_str.length_ + 1];
    strcpy(new_str.str_, str_);
    strcat(new_str.str_, str.str_);
    return new_str;
}

void String::append(const char *str) {

        String new_str(str);
        append(new_str);
}

void String::append(const String &str) {

    String new_str = *this + str;
    delete[] str_;
    str_ = new_str.str_;
    length_ = new_str.length_;
}

const char *String::c_str() {

    return str_;
}










