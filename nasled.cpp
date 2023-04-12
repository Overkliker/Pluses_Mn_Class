#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


class Animal{
    protected:
        string name;

    public:
        Animal(string name){
            this->name = name;
        }
};

class Pet{
    public:
        virtual void eat(int count_eat);
};



class Cat: public Pet, public Animal{
    public:
    int fr;
    int sr;
    Cat(string name, int fr, int sr): Animal{name} {
        this->name = name;
        this->fr = fr;
        this->sr = sr;
    }
    void eat(int count_eat) override{

        if (count_eat > fr && count_eat < sr){
            cout << name <<"накормлен";
        }
        else{
            cout << name << "переел";
        }
        
    }
};

class Dog: public Pet, public Animal{

    public:
    int fr;
    int sr;
    Dog(string name, int fr, int sr): Animal{name} {
        this->name = name;
        this->fr = fr;
        this->sr = sr;
    }
    void eat(int count_eat) override{

        if (count_eat > fr && count_eat < sr){
            cout << name <<"накормлен";
        }
        else{
            cout << name << "переел";
        }
        
    }
};


int main(){
    string a, b;
    cout << "Input cat name: ";
    getline(cin, a);

    cout << "Input dog name: ";
    getline(cin, b);
    

    int fn = rand()%(100-0+1) + 0;
    int sn = rand()%(100-0+1) + 0;

    Dog d {a, fn, sn};
    Cat c {b, fn, sn};

    int i;
    cout << "Введите количество еды: ";
    cin >> i;

    d.eat(i);
    c.eat(i);

}


