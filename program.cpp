#include "program.h"  


void Sugar::melt()
{
    std::cout << "My sweetness is " << sweetness;
}

int main() 
{ 
    std::cout << "Hello Geek\n"; 
    Sugar a(13);
    a.melt();
    return 0; 
} 
