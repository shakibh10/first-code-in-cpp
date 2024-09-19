#include<iostream>
using namespace std;

int main(){


    // int variable and example 

    int num=202;
    cout << num << "\n";



    // double variable and example 

    double number=12.9;
    cout << number << "\n";

    //  char variable and example 

    char name = 'c';
    cout << name << "\n";


    //  string variable and example 


    string myName="Shakib";

    cout << myName << "\n";

    // multiple varibales

    int x=3,y=5,z=10;

    int sum=x+y+z;

    cout << sum << "\n";

    // constant 

    const int age=21;

    cout << age << "\n ";


    // cin and cout 

    int pen;

    cout << "Enter the numbe rof pen" << " " <<"\n";
    cin >> pen;

    if(pen > 1 ){
        cout << "He has " << pen << " " << "pens \n";
    }else if(pen == 1){
         cout << "He has " << pen << " " << "pen";
    }
    
    return 0;
}
