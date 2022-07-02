#pragma once
#ifndef SYSY_AST_HPP_DR_
#define SYSY_AST_HPP_DR_

#include "token.hpp"
#include "baseast.hpp"
#include "symtab.hpp"
#include "flow.hpp"
#include <vector>
#include <map>

using LTTable = std::map<int, ASTptr>;

class ListTree;

class VecAST;

class FunDefAST;

class LvalAST;

using LTptr = ListTree *;
using Vecptr = VecAST *;

extern ASTptr mainptr;

class BinaryAST : public BaseAST {
public:
    BinaryAST(TKptr p);

    BinaryAST(ASTptr lch, ASTptr rch, TKptr op);

    ~BinaryAST();

    void Eval();

    bool Isconst() { return isconst; }

    int Cval() { return cval; }

    bool Isanumber();

    ASTptr Lexp() { return lexp; }

    ASTptr Rexp() { return rexp; }

    int Op() { return op; }

    void Generator();

    bool isconst;
    bool isevaled;
    int op;
    int cval;
    ASTptr lexp, rexp;
};

class UnaryAST : public BaseAST {
public:
    UnaryAST(ASTptr ch, TKptr op);

    ~UnaryAST();

    void Coalesce(TKptr p);

    void Eval();

    bool Isconst() { return isconst; }

    bool Isanumber();

    int Cval() { return cval; }

    ASTptr Exp() { return exp; }

    int Op() { return op; }

    void Generator();

    bool isconst;
    bool isevaled;
    int op;
    int cval;
    ASTptr exp;
};

class FunCallAST : public BaseAST {
public:
    FunCallAST(TKptr);

    ~FunCallAST();

    // Check whether the param list match
    bool Checkparamlistsize();

    void Verifyfuncall();

    bool Isanumber();

    bool Isconst() { return false; }

    void Eval() { return; }

    void Generator();

    SYMptr sym;
    std::vector<ASTptr> rparams;
};

class LvalAST : public BaseAST {
public:
    LvalAST(TKptr p, ASTptr q);

    ~LvalAST(); // Destroy only the entries in ind

    bool Checkiftoomanyindices();

    bool Checknegindex();

    bool Checkbigindex();

    bool Isanumber();

    void Eval();

    bool Isconst() { return isconst; }

    int Cval() { return cval; }

    void Generator();

    SYMptr sym;
    std::vector<ASTptr> indices;
    bool isconst;
    bool isevaled;
    int cval;

    bool isleft;
};

class BlockAST : public BaseAST {
public:
    BlockAST() : BaseAST(0, 0, 0, 0, ASTType::Block), bno(blockno) {}

    ~BlockAST() {
        for (auto i: clauses) if (i) delete i;
        clauses.clear();
    }

    void Insertclause(ASTptr p) { if (p) clauses.push_back(p); }

    void Insertclauses(std::vector<ASTptr> &&p) { for (auto i: p) clauses.push_back(i); }

    void Generator();

    const int bno;
    std::vector<ASTptr> clauses;
};

class DeclAST : public BaseAST {
public:
    DeclAST() : BaseAST(0, 0, 0, 0, ASTType::Decl), sym(nullptr) {}

    ~DeclAST(); // Destroy only the entries in the initialization table

    ASTptr Getinitvalue(int index);

    void Generator();

    SYMptr sym;
    LTTable init;
};

class FunDefAST : public BaseAST {
public:
    FunDefAST() : BaseAST(0, 0, 0, 0, ASTType::Fundef), sym(nullptr), body(nullptr) {}

    ~FunDefAST(); // Destroy AST nodes for fparams and function body

    void Generator();

    void Convert2EE();

    SYMptr sym;
    std::vector<ASTptr> fparams;
    ASTptr body;
};

class AssignAST : public BaseAST {
public:
    AssignAST() : BaseAST(0, 0, 0, 0, ASTType::Assign), lval(nullptr), exp(nullptr) {}

    ~AssignAST() {
        if (lval) {
            delete lval;
            lval = nullptr;
        }
        if (exp) {
            delete exp;
            exp = nullptr;
        }
    }

    void Generator();

    ASTptr lval, exp;
};

class IfAST : public BaseAST {
public:
    IfAST() : BaseAST(0, 0, 0, 0, ASTType::If), cond(nullptr), then(nullptr), els(nullptr) {}

    ~IfAST() {
        if (cond) {
            delete cond;
            cond = nullptr;
        }
        if (then) {
            delete then;
            then = nullptr;
        }
        if (els) {
            delete els;
            els = nullptr;
        }
    }

    void Generator();

    ASTptr cond, then, els;
};

class WhileAST : public BaseAST {
public:
    WhileAST() : BaseAST(0, 0, 0, 0, ASTType::While), cond(nullptr), body(nullptr) {}

    ~WhileAST() {
        if (cond) {
            delete cond;
            cond = nullptr;
        }
        if (body) {
            delete body;
            body = nullptr;
        }
    }

    void Generator();

    ASTptr cond, body;
};

class BreakAST : public BaseAST {
public:
    BreakAST() : BaseAST(0, 0, 0, 0, ASTType::Break), back(Topwhilestk()) {}

    ~BreakAST() {}

    void Generator();

    ASTptr back;
};

class ContAST : public BaseAST {
public:
    ContAST() : BaseAST(0, 0, 0, 0, ASTType::Continue), back(Topwhilestk()) {}

    ~ContAST() {}

    void Generator();

    ASTptr back;
};

class RetAST : public BaseAST {
public:
    RetAST() : BaseAST(0, 0, 0, 0, ASTType::Return), back(curfundef), exp(nullptr) {}

    ~RetAST() {
        if (exp) delete exp;
        exp = nullptr;
    }

    void Generator();

    ASTptr back;
    ASTptr exp;
};

class VecAST : public BaseAST {
public:
    VecAST() : BaseAST(0, 0, 0, 0, ASTType::Vec) {}

    ~VecAST() {}

    void Insertastlist(ASTptr p);

    std::vector<int> Getrawarraytype();

    std::vector<ASTptr> Getfparams();

    std::vector<ASTptr> Getrparams();

    std::vector<ASTptr> Getindices();

    std::vector<ASTptr> &Astlist() { return astlist; }

    std::vector<ASTptr> astlist;
};

class ListTree : public BaseAST {
public:
    ListTree() : BaseAST(0, 0, 0, 0, ASTType::LT), astptr(nullptr) {}

    ListTree(TKptr lbr, TKptr rbr) : BaseAST(lbr->lno, lbr->bgn, rbr->lno, rbr->end, ASTType::LT), \
    astptr(nullptr) {}

    ListTree(ASTptr astptr) : BaseAST(astptr->bgnlno, astptr->bgnpos, astptr->endlno, astptr->endpos, ASTType::LT), \
    astptr(astptr) {}

    ~ListTree() {
        if (!_Isleaf_()) {
            for (auto p: sublist) delete p;
            sublist.clear();
        }
    }

    void Insertsublist(ASTptr p);

    bool Checkform(const std::vector<int> &dim_pro);

    LTTable Flatten(const std::vector<int> &dim_pro);

    void Debug(int dep);

private:
    bool _Checkform_(std::vector<int> &dim);

    void _Flatten_(std::vector<int> &dim, LTTable &res, int ind, int upper);

    bool _Isnulllist_() { return !astptr && sublist.empty(); }

    bool _Isleaf_() { return astptr; }

public:
    ASTptr astptr;
    std::vector<ASTptr> sublist;
};


void Verifyanumber(ASTptr p);

#endif