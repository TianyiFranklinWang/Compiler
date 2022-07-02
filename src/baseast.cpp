#include "baseast.hpp"
#include "error.hpp"


void BaseAST::Eval() { Reportexception(Exception::Unexpectedbasecall); }

bool BaseAST::Isconst() {
    Reportexception(Exception::Unexpectedbasecall);
    return false;
}

int BaseAST::Cval() {
    Reportexception(Exception::Unexpectedbasecall);
    return 0;
}

bool BaseAST::Isanumber() {
    Reportexception(Exception::Unexpectedbasecall);
    return false;
}

void BaseAST::Generator() { Reportexception(Exception::Unexpectedbasecall); }

void BaseAST::Convert2EE() { Reportexception(Exception::Unexpectedbasecall); }