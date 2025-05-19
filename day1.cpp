//Qn1
// #include<iostream>
// using namespace std;
// int main(){
// cout<<"Hello Aadi,Welcome to C++!";
// }

//Qn2
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2;
    
//     cout<<"Enter the value of num1: ";
//     cin>>num1;

//     cout<<"Enter the value of num2: ";
//     cin>>num2;

//     cout<<"The sum of num1 and num2 is: "<<num1 + num2;
//     cout<<"\nThe difference of num1 and num2 is: "<<num1 - num2;
//     cout<<"\nThe product of num1 and num2 is: "<<num1 * num2;
//     cout<<"\nThe division of num1 and num2 is: "<<num1 / num2;
//     cout<<"\nThe remainder of num1 and num2 is: "<<num1 % num2;

//     return 0;
// }

//Qn3
// #include<iostream>
// using namespace std;
// int main(){
//     float area,length,breadth;
//     cout<<"Enter the length of the rectangle: ";
//     cin>>length;
//     cout<<"Enter the breadth of the rectangle: ";
//     cin>>breadth;
//     cout<<"The area of the rectangle is: "<<length*breadth;
// }

//Qn4
// #include<iostream>
// using namespace std;
// int x = 10;
// int main(){
//     int x = 20;
//     cout<<"Local x: "<<x<<endl;
//     cout<<"Global x:"<<::x<<endl;
//     return 0;
// }

//Qn5
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;
    a = a + b;//a = 15,b = 10
    b = a - b;//a = 15,b = 5
    a = a - b;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}