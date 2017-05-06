// main.cpp
#include "LexicalAnalyzer.h"
 
 
int main()
{
    table["pi"]=3.1415926535897932385;
    table["e"]=2.7182818284590452354;
    while (std::cin) {
        get_token();
        if (curr_tok==END) break;
        if (curr_tok==PRINT) continue;
        std::cout<<expr(false)<<'\n';
    }
    return no_of_errors;
}