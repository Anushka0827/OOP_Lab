#include<iostream>
using namespace std;

class ComplexNum { // Renamed from 'complex' to 'ComplexNum'
    float x;
    float y;
public:
    ComplexNum() { 
        x = 0; 
        y = 0; 
    }
    
    ComplexNum(float real, float img){
        x = real;
        y = img;
    }        
    
    ComplexNum operator +(ComplexNum c);
    void display(void);
};

ComplexNum ComplexNum :: operator+(ComplexNum c){
    ComplexNum temp;
    temp.x = x + c.x;     
    temp.y = y + c.y;     
    return (temp);
}

void ComplexNum :: display(void){
    cout << x << " + j" << y << "\n";
}

int main(){
    ComplexNum c1, c2, c3;
    c1 = ComplexNum(2.5, 3.5);
    c2 = ComplexNum(1.6, 2.7); 
    c3 = c1 + c2;

    cout << "\nC1:";
    c1.display();
    cout << "\nC2:";
    c2.display();
    cout << "\nC3:";
    c3.display();
    
    return 0;
}
