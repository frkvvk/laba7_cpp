#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

struct shaurma
{
    int kalorii;
    double ves;
    wstring sous;
    wstring meat;
};

int main()
{
    //функция 1:
    wifstream inFile("ababa.txt");
    vector<shaurma> vse_shaurmy;
    while(!inFile.eof())
    {
        shaurma vid;
        inFile >> vid.kalorii;
        inFile >> vid.ves;
        inFile >> vid.sous;
        inFile >> vid.meat;
        vse_shaurmy.push_back(vid);
    }

    //функция 2:

    //функция 3:
    return 0;
}
