#include <iostream>
#include "MinMax.hpp"
#include <vector>
#include <random>
#include <fstream>

using namespace std;
#define tamanhovetor 500000


int main()
{
    MinMax minMax;
    vector<int> vetor;
    int max, min;
    ofstream outFile;
    outFile.open("database/data.txt",ios::app);
    if (!outFile.is_open())
    {
        cout << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    srand(time(nullptr));
    
      for (int i = 0; i < tamanhovetor; i++)
    {
        vetor.push_back(rand() % 1000);
    }
   
    vector <int> v = vetor;
    for (int i = 0; i < 10; i++){
    
    vetor = v;

    outFile << endl << "Execução " << i+1 << endl;
    outFile << "Vetor randômico" << endl;
    minMax.minMax1(max, min, vetor, outFile);
    minMax.minMax2(max, min, vetor, outFile);
    minMax.minMax3(max, min, vetor, outFile);

    sort(vetor.begin(), vetor.end());
    outFile << "\n Vetor crescente" << endl;
    minMax.minMax1(max, min, vetor, outFile);
    minMax.minMax2(max, min, vetor, outFile);
    minMax.minMax3(max, min, vetor, outFile);

    reverse(vetor.begin(), vetor.end());
    outFile << "\n Vetor decrescente" << endl;
    minMax.minMax1(max, min, vetor, outFile);
    minMax.minMax2(max, min, vetor, outFile);
    minMax.minMax3(max, min, vetor, outFile);
   }
    outFile.close();

    return 0;
}
