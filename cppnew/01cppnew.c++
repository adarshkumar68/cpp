#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter_you_marks:"<<endl;
    cin>> marks;
    if (marks>20)
    {
        cout<<"pass"<<endl;
    }
    else if (marks<20)
    {
    cout<<"fail"<<endl;
    }
    else
    {
    cout<<"improve"<<endl;
    }
    cout<<sizeof(marks)<<'\n';
return 0;
}