#pragma once
#ifndef SYSY_STRTAB_HPP_DR_
#define SYSY_STRTAB_HPP_DR_

#include <list>
#include <string>

extern std::list<std::string> strtab;
using STRptr = std::list<std::string>::iterator;

inline STRptr Inserttostrtab(const char *p) {
    std::string tmp = p;
    strtab.push_front(std::move(tmp));
    return strtab.begin();
}

#endif