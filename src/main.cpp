#include <iostream>
#include "MinMax.hpp"
#include <vector>
#include <random>

using namespace std;
#define tamanhovetor 1000


int main()
{
    MinMax minMax;
    vector<int> vetor;
    int max, min;

    srand(time(nullptr));

    for (int i = 0; i < tamanhovetor; i++)
    {
        vetor.push_back(rand() % tamanhovetor);
    }

    cout << "Vetor randômico" << endl;
    minMax.minMax1(max, min, vetor);
    minMax.minMax2(max, min, vetor);
    minMax.minMax3(max, min, vetor);

    sort(vetor.begin(), vetor.end());
    cout << "\n Vetor crescente" << endl;
    minMax.minMax1(max, min, vetor);
    minMax.minMax2(max, min, vetor);
    minMax.minMax3(max, min, vetor);

    reverse(vetor.begin(), vetor.end());
    cout << "\n Vetor decrescente" << endl;
    minMax.minMax1(max, min, vetor);
    minMax.minMax2(max, min, vetor);
    minMax.minMax3(max, min, vetor);

    return 0;
}
