////////////////////////////////////////////////////////////////////////////
// Author       : Prajyot 
// Coursework   : RA
// Module       : h2p.cc
// Description  : File with a hard to predict code
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <random>
#include <experimental/random>

using namespace std;

int main(int argc, char* argv[]){

    srand(time(nullptr));
    int random = experimental::randint(100, 999)%10;

    if(random >= 5)
        cout << "Number greater than 5" << endl;
    else
        cout << "Number less than 5" << endl;

    return 0;
}
