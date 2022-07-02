#pragma once
#ifndef SYSY_SYMTAB_HPP_DR_
#define SYSY_SYMTAB_HPP_DR_

#include "baseast.hpp"
#include "strtab.hpp"
#include "token.hpp"

#include <string>
#include <vector>
#include <unordered_set>

class BaseSYM;

class EqualSYM;

class HashSYM;

class SYMTab;

using SYMptr = BaseSYM *;
using STptr = SYMTab *;

extern std::hash<std::string> hashstr;
extern STptr const glbst;

enum class SYMType {
    Var, Fun
};

class BaseSYM {
public:
    BaseSYM(STRptr p, SYMType type_, ASTptr astptr_, int bno_, int lno_, int bgn_, int end_) : \
    strptr(p), type(type_), astptr(astptr_), bno(bno_), lno(lno_), bgn(bgn_), end(end_), \
    fngprnt(hashstr(*p)) {};

    virtual ~BaseSYM() {};

    STRptr strptr;
    SYMType type;
    ASTptr astptr;
    int bno;
    int lno, bgn, end;
    const size_t fngprnt;
};

// SYM for variables
class VarSYM : public BaseSYM {
public:
    VarSYM(bool isconst_, TKptr p, ASTptr astptr_);

    ~VarSYM() {};

    void Setarraytype(std::vector<int> &&);

    const bool isconst;
    std::vector<int> dim_pro; // e.g. [2][3][5] -> <1, 5, 15, 30>, [][2][3] -> <1, 3, 6, 0>
};

class FunSYM : public BaseSYM {
public:
    FunSYM(bool isvoid_, TKptr p, ASTptr astptr_);

    ~FunSYM() {};

    void Insertfparams(SYMptr);

    const bool isvoid;
    std::vector<SYMptr> fparams;
};

class EqualSYM {
public:
    bool operator()(SYMptr p, SYMptr q) const {
        return *(p->strptr) == *(q->strptr);
    }
};

class HashSYM {
public:
    size_t operator()(SYMptr p) const { return p->fngprnt; }
};

class SYMTab {
public:
    SYMTab(int bno_, STptr fth = nullptr) : father(fth), bno(bno_) {}

    ~SYMTab();

    std::unordered_set<SYMptr, HashSYM, EqualSYM> symtab;
    std::vector<STptr> child;
    STptr father;
    int bno;
};

SYMptr Newfunsymentry(bool isvoid, TKptr, ASTptr);

SYMptr Newvarsymentry(bool isconst, TKptr, ASTptr);

void Pushsymtab();

void Popsymtab();

void Insertsymentry(SYMptr);

SYMptr Lookupstring(STRptr p);

SYMptr Checkifdeclared(SYMptr p);

void Debugsymtab(STptr);

#endif