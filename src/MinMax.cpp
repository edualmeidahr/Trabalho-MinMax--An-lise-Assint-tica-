#include "MinMax.hpp"

using namespace std;

void MinMax :: minMax1(int min, int max, vector <int> vetor, ofstream& outFile) {
    clock_t inicio, fim;
    inicio = clock();
    max = vetor[0];
    min = vetor[0];
    for (int i = 1; i < vetor.size(); i++)
    {
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
        if (vetor[i] < min)
        {
            min = vetor[i];
        }
    }
    fim = clock() - inicio;
    outFile << "MinMax1: Tempo de execução: " << fixed << setprecision(6) << ((float)fim) / CLOCKS_PER_SEC << " segundos" << endl;
}

void MinMax :: minMax2(int min, int max, vector <int> vetor, ofstream& outFile){
    clock_t inicio, fim;
    inicio = clock();
    max = vetor[0];
    min = vetor[0];
    for (int i = 1; i < vetor.size(); i++)
    {
        if (vetor[i] > max)
        {
            max = vetor[i];
        }
        else if (vetor[i] < min)
        {
            min = vetor[i];
        }
    }
    fim = clock() - inicio;
    outFile << "MinMax2: Tempo de execução: " << fixed << setprecision(6) << ((float)fim) / CLOCKS_PER_SEC << " segundos" << endl;
}

void MinMax :: minMax3(int max, int min, vector<int> vetor, ofstream& outFile)
{
    clock_t inicio, fim;
    inicio = clock();
    int FimDoAnel;
    if (vetor.size() % 2 != 0)
    {
        vetor.push_back(vetor[vetor.size() - 1]);
        FimDoAnel = vetor.size();
    }
    else
    {
        FimDoAnel = vetor.size() - 1;
    }

    if (vetor[0] > vetor[1])
    {
        max = vetor[0];
        min = vetor[1];
    }
    int i = 2;
    while (i < FimDoAnel)
    {
        if (vetor[i] > vetor[i + 1])
        {
            if (vetor[i] > max)
            {
                max = vetor[i];
            }
            if (vetor[i + 1] < min)
            {
                min = vetor[i + 1];
            }
        }
        else
        {
            if (vetor[i + 1] > max)
            {
                max = vetor[i + 1];
            }
            if (vetor[i] < min)
            {
                min = vetor[i];
            }
        }
        i += 2;
    }
    fim = clock() - inicio;
    outFile << "MinMax3: Tempo de execução: " << fixed << setprecision(6) << ((float)fim) / CLOCKS_PER_SEC << " segundos" << endl;  
}
    
