// LexicalAnalyzer.h
#ifndef LEXICALANALYZER_H_INCLUDED
#define LEXICALANALYZER_H_INCLUDED
 
#include <cctype>
#include <string>
#include <map>
#include <iostream>
 
enum Token_value {
    NAME,       NUMBER,      END,
    PLUS = '+', MINUS = '-', MUL = '*', DIV = '/',
    PRINT = ';',ASSIGN = '=',LP = '(',  RP = ')'
};
extern Token_value curr_tok;
extern std::map<std::string,double>table;
extern int no_of_errors;
 
Token_value get_token();
 
double expr(bool);
double term (bool);
double prim (bool);
int error(const std::string&);
 
#endif // LEXICALANALYZER_H_INCLUDED