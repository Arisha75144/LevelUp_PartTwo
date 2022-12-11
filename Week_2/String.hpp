//
// Created by Морозова Арина on 09.12.2022.
//

#ifndef LEVELUP_PARTTWO_STRING_HPP
#define LEVELUP_PARTTWO_STRING_HPP

#include <iostream>
#include<compare>
class String {

public:
    String();

    String(const char *str);

    String(const String &str);

    String(String &&str) noexcept;

    ~String();

    [[nodiscard]] inline size_t length() const { return _length; }

    [[nodiscard]] inline bool empty() const {
        return _length == 0;
    }




    char &operator[](int index);


    void append(const String &str);


    void append(const char *str);



     String operator+(const String& str);

    friend std::ostream &operator<<(std::ostream &os, const String &str) {

        os << str._str;
        return os;
    };
    const char *c_str();



private:
    char *_str;
    size_t _length;

};

#endif