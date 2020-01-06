#include <iostream> 

class Sugar
{
    private:
       int sweetness;
    public:
	   Sugar(int initSweetness)
       {
            sweetness = initSweetness;
       }
       void melt();
       // {
       //      std::cout << "My sweetness is " << sweetness;
       // }
};
