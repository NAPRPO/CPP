#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;
using std::setw;

//using namespace std;

int main()
{
    const long ROLLS = 36000;
    int dicenum = 2;
    const int SIZE = 13;

    int sum[SIZE] = {0};
    int expected[SIZE] = {0,0,1,2,3,4,5,6,5,4,3,2,1};

    int die1;
    int die2;

    srand(time(0));

    for (int i=1; i <=ROLLS; i++)
    {
        die1 = rand()%6+1;
        die2 = rand()%6+1;
        sum[die1+die2]++;
    }

    cout << "----------------------------------------\n";
    cout << " DICE ROLLING SIMULATOR             \n";
    cout << "----------------------------------------\n";
    cout << "Enter number of dice:    " <<2 << "\n";
    cout << "Enter number of rolling: " <<36000   << "\n";
    cout << "----------------------------------------\n";

    cout << "SUM OF   DENSITY OF    DISTRIBUTION     \n";
    cout << "FACES    PROBABILITY   OF PROBABILITY   \n";
    cout << "----------------------------------------\n";



    for (int j =dicenum; j<SIZE; j++)
        cout<<setw(2)<<setprecision(2)<<"["<<j<<"]"
            <<setw(12)<<setprecision(4)<<100.0*expected[j]/36<<"%"
            <<setw(14)<<setprecision(4)<<100.0*sum[j]/36000<<"%\n";

    return 0;
}
