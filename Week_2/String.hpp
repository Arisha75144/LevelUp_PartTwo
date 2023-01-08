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

    [[nodiscard]] inline size_t length() const { return length_; }

    [[nodiscard]] inline bool empty() const {

        return length_ == 0;
    }


    char &operator[](int index);


    void append(const String &str);


    void append(const char *str);


    String operator+(const String &str);

    friend std::ostream &operator<<(std::ostream &os, const String &str) {

        os << str.str_;
        return os;
    };

    const char *c_str();

    std::strong_ordering operator<=>(const String &str) const {
        return strcmp(str_, str.str_) <=> 0;
    }


private:
    char *str_;
    size_t length_;

};

#endif