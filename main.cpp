#include <iostream>
#include <bits/stdc++.h>
using namespace std;




class fraction{
private :
    int numerator;
    int denominator;
public:
    fraction(int numerator ,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
        cout<<this<<endl;
    }

    int getNumerator() const{
    return numerator;
    }
    int getDenominator() const{
    return  denominator;
    }
    void setNumerator(int n){
        numerator=n;
    }
    void setDenominator(int d){
        denominator=d;
    }
    void print() const{
        cout<<numerator<<"\  " << this->denominator<<endl;
    }

    void simplify(){
        int gcd=1;
        int min_of_nr_dr=min(this->numerator,this->denominator);

        for(int i=1;i<=min_of_nr_dr;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }

        this->numerator/=gcd;

        this->denominator/=gcd;
    }

    void add(fraction const & f2){
        int lcm=this->denominator*f2.denominator;
        int a=lcm/denominator;
        int b=lcm/f2.denominator;

        int new_num=a*this->numerator+b*f2.numerator;
        int new_deno=lcm;

        this->numerator=new_num;
        this->denominator=new_deno;
        //f2.denominator=0;

        this->simplify();
    }

    void multiply(fraction const & f2){
        this->numerator=this->numerator*f2.numerator;
        this->denominator=this->denominator*f2.denominator;
        this->simplify();
    }
};




int main()
{
    /*//cout << "Hello world!" << endl;
    fraction f1(10,2),f2(12,4);
    //cout<<&f1<<endl;
    //f1.add(f2);
    //f1.print();
    //f2.print();
    f1.multiply(f2);
    f1.print();
    f2.print();*/
    fraction f1(10,2),f2(15,4);

    fraction const f3(10,5);

    cout<<f3.getNumerator()<<"     "<<f3.getDenominator()<<endl;




    return 0;
}
