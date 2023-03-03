#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;
class Student
{
    string first_n;
    string second_n;
    string father_n;
    int numb,reses[5];
    float mid_score;
    public:
        Student(string first, string second, string father,int n,float res[5])
        {
            string first_n = first;
            string second_n = second;
            string father_n = father;
            int numb = n;
            float sum = 0;
            for(int i = 0; i < 5; ++i){
                reses[i] = res[i];
                sum += res[i];
            }
            mid_score = sum / 5.0;
        }
        bool test(){return (mid_score > 4.2);}
        void FIO(){cout << second_n << ' ' << first_n << ' ' << father_n << ' ';}
        void number(){cout << numb;}
};
int main()
{
    vector <Student> Group;
    
    string fir,sec,fath;
    int num,fl = 0;
    float lis[5];
    for(int i = 0; i < 10; ++i){
        cin >> fir >> sec >> fath >> num;
        for(int j = 0; j < 5; ++j){
            cin >> lis[j];
        }
        Group.push_back(Student(sec,fir,fath,num,lis));
    }
    for (auto& i : Group){
        if (i.test()){
            fl = 1;
            i.FIO();
            i.number();
        }
    }
    if(fl == 0){ cout << "There is no good Students in the Group.";}
}
