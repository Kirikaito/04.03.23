#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;
class Calc
{
    string primer;
    vector <string> act;
    vector <int> numbers;
    public:
        Calc(string prim);
        primer = prim;
        int n = 0;
        if(prim[0] == '*' or 
        prim[0] == '/' or 
        prim[0] == '-' or 
        prim[0] == '+' or 
        prim[0] == ')' or 
        prim[-1] == '*' or 
        prim[-1] == '/' or 
        prim[-1] == '-' or 
        prim[-1] == '+' or 
        prim[-1] == '('){
            cout << "incorrect data";
            break;
            }
        for(auto i : primer){
            if(i == '*' or i == '/' or i == '-' or i == '+' or i == '(' or i == ')' or i == ' '){
            act.push_back(i);
            numbers.push_back(n);
            n = 0;
            continue;
            }
            n = (n*10) + ((int)i) - 48;
        }
};
int main()
{
    string primer;
    cin >> primer;
    Calc(primer);
}
