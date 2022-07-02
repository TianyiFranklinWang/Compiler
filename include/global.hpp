#pragma once
#ifndef SYSY_GLOBAL_HPP_DR_
#define SYSY_GLOBAL_HPP_DR_

#include <vector>
#include <string>

#define RED(message) ("\033[1;31m" message "\033[0m")
#define PINK(message) ("\033[1;35m" message "\033[0m")
#define GREEN(message) ("\033[1;32m" message "\033[0m")
#define YELLOW(message) ("\033[1;33m" message "\033[0m")
#define GREY(message)    ("\033[1;90m" message "\033[0m")

#define MAXIDENTLENGTH 31

extern int lineno, tokenpos, tokenwidth;

extern int blockno;

extern std::vector<std::string> filecontent;

void Filepreread(const std::string &);

std::vector<int> Arraydimprocess(const std::vector<int> &);

int Arraylinearno(const std::vector<int> &, const std::vector<int> &);

std::string Encodemessage(const std::vector<int> &p);

std::string Encodemessage(int p);

#endif