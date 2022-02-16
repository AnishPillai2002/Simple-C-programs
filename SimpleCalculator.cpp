# include <iostream>
# include <string>
# include <iomanip>
using namespace std;

// Creating Functions for basic operstions [ + , - , * , / ]

float addition(float a,float b){

    float c;
    c=a+b;

    return c;
}

float difference(float a,float b){

    float c;
    c=a-b;
    return c;       
}

float division(float a, float b){


    float c;
    c=a/b;
    return c;
}

float multiplication(float a, float b) {

    float c;
    c=a*b;
    return c;
}




// Function to take input and display result

int main(){

    
    
    float x,y;
    string op;

    string input,output;

    input="Enter Number 1 :  ";
    output="Enter Number 2 : ";


    
    cout<<input;
    cin>>x;
    

    cout<<output;
    cin>>y;
    cout<<endl;
    cout<<endl;

    cout<<"Select any of the following Operations "<<endl;
    cout<<"[+,-,/,*]"<<endl;
    cout<<endl;

    cin>>op;


    cout<<endl;

    if (op=="+"){
        cout<<addition(x,y);
    }

    else if (op=="-"){
        cout<<difference(x,y);
    }

    else if (op=="*"){
        cout<<multiplication(x,y);
    }

    else if (op=="/"){
        cout<<division(x,y);
    }

    else {
        cout<<"Enter a Valid Operator"<<endl;
    }

    

    return 0;}


    
