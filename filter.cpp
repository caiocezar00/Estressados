#include <iostream>
#include <vector>
using namespace std;

int get_men(vector <int> vet){
    vector<int> hom;
    for(int elem : vet)
        if(elem > 0)
            hom.push_back(elem);
        return hom;
}
int get_woman(vector <int> vet){
    vector <int> mul;
    for(int elem : vet)
        if(elem >-10 && elem < 0)
            mul.push_back(elem);
        return mul;
}
int main()
