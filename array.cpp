#include <iostream>

using namespace std;

//function declaration
double sumtotal(double grade[],int size);

int main()
{
    double grade[] ={6,4,3,2,3};


    int size = sizeof(grade)/sizeof(double);

    double total = sumtotal(grade,size);
    cout << "rupies  " << total;


    return 0;
}

double sumtotal(double grade[],int size)
{
    double total =0;
    for(int i =0; i <size;i++)
    {
        total =+ grade[i];

    }
    return total;



}

