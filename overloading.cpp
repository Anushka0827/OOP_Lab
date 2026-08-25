#include<iostream>
using namespace std;
class Rectangle{
        int len,breadth;
 public:
        Rectangle(){
        len=0;
        breadth=0;
        }       
        Rectangle(int l, int b){
        len=l;
        breadth=b;
        }
        
        Rectangle operator +(Rectangle rec){
        Rectangle R;
        R.len= len+rec.len;
        R.breadth=breadth+rec.breadth;
        return(R);
        }
        
        void display(void);
};
void Rectangle :: display(void){
cout<<"\n Length="<<len;
cout<<"\n Breadth="<<breadth;
}

int main(){
Rectangle R1,R2,R3;
R1= Rectangle(2,5);
R2=Rectangle(3,4);
R3=R1+R2;

cout<<"\nRectangle 1:";
R1.display();
cout<<"\nRectangle 2:";
R2.display();
cout<<"\nRectangle 3:";
R3.display();
return 0;
}
