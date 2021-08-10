#include <iostream>

#include <ctime>
using namespace std;


int main() {

    srand((unsigned) time(0));
    long long int counter=0;
    long double numOfRolls=2000000;
    for (long long int i = 0; i < numOfRolls; ++i) {
        int max=6;
        int min =1;
        int range = max - min + 1;
        int num = rand() % range + min;

        if (num==3||num==4)
        {
            counter++;
        }

    }

    cout<<counter<<endl;

    cout<<double(counter/numOfRolls)<<endl;




    return 0;
}
