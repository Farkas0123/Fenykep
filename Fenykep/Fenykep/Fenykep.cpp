#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> lista(N);

    for (auto& i : lista)
    {
        cin >> i.first >> i.second;
    }

    sort(lista.begin(), lista.end(), [](pair<int, int> p1, pair<int, int> p2) {return p1.second < p2.second; });

    cout << endl;


    int elozov = 0;
    int osszeg = 0;
    vector<int> vegek;
    for (auto& par : lista)
    {
        if (elozov <= par.first)
        {
            osszeg++;
            vegek.push_back(par.second - 1);
            elozov = par.second;
        }
    }

    cout << osszeg << endl;

    elozov = 0;
    for (auto& ora : vegek)
    {
        cout << ora << " ";
    }
}