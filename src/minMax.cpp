
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;
#define tamanhovetor 1000

void minMax1(int max, int min, vector<int> vetor)
{
    //pegar tempo inicial aqui
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
    //pegar tempo final aqui
    fim = clock() - inicio;
    cout << "MinMax1: ";
    cout << "Tempo de execução: " << ((float)fim)/CLOCKS_PER_SEC << " segundos" << endl;
}

void minMax2(int max, int min, vector<int> vetor)
{
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
    cout << "MinMax2: ";
    cout << "Tempo de execução: " << ((float)fim)/CLOCKS_PER_SEC << " segundos" << endl;
}

void minMax3(int max, int min, vector<int> vetor)
{
    clock_t inicio, fim;
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
    cout << "MinMax3: ";
    cout << "Tempo de execução: " << ((float)fim)/CLOCKS_PER_SEC << " segundos" << endl << endl;
}

int main()
{
    vector<int> vetor;
    int max, min;
    for (int i = 0; i < tamanhovetor; i++)
    {
        vetor.push_back(rand() % 1000);
    }
    //Testanto vetor randomico
    cout << "Testando vetor randomico" << endl << endl;
    minMax1(max, min, vetor);
    minMax2(max, min, vetor);
    minMax3(max, min, vetor);
    
    //Testanto vetor ordenado
    cout << "Testando vetor ordenado" << endl << endl;
    sort(vetor.begin(), vetor.end());
    minMax1(max, min, vetor);
    minMax2(max, min, vetor);
    minMax3(max, min, vetor);

    //Testanto vetor ordenado inversamente
    cout << "Testando vetor ordenado inversamente" << endl << endl;
    reverse(vetor.begin(), vetor.end());
    minMax1(max, min, vetor);
    minMax2(max, min, vetor);
    minMax3(max, min, vetor);



    return 0;
}