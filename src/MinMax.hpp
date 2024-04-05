#ifndef MinMax_HPP
#define MinMax_HPP
#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <fstream>

using namespace std;


class MinMax {
public:
void minMax1(int min, int max, vector <int> vetor, ofstream& outFile);
void minMax2(int min, int max, vector <int> vetor, ofstream& outFile);
void minMax3(int min, int max, vector <int> vetor, ofstream& outFile);

};
#endif