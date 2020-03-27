#include<iostream>  
#include <cmath>


using namespace std; 
 
struct Square
{
    double *vertex1;
    double *vertex2;
    double perimetr;
    double square;
};


struct  Square * intit(double x1,double x2,double x3,double x4){
    Square* temp_rec = new Square;

    temp_rec->vertex1 = new double[2];
    temp_rec->vertex2 = new double[2];

    temp_rec->vertex1[0] =x1;
    temp_rec->vertex1[1] =x2;
    temp_rec->vertex2[0] =x3;
    temp_rec->vertex2[1] =x4;

    return temp_rec;
}

void calcPerimetr(Square *temp_rec){
    double temp_1 = abs(temp_rec->vertex1[0] - temp_rec->vertex2[0]);
    double temp_2 = abs(temp_rec->vertex2[0] - temp_rec->vertex2[1]);
    temp_rec->perimetr = (2*temp_1 + 2*temp_2);
}

void calcArea (Square *temp_rec){
    double temp_1 = abs(temp_rec->vertex1[0] - temp_rec->vertex2[0]);
    double temp_2 = abs(temp_rec->vertex2[0] - temp_rec->vertex2[1]);
    temp_rec ->square = (temp_1* temp_2);
}

void move(Square *temp_rec,double x1,double x2,double x3,double x4){
    temp_rec->vertex1[0] =x1;
    temp_rec->vertex1[1] =x2;
    temp_rec->vertex2[0] =x3;
    temp_rec->vertex2[1] =x4;
}
 void show(Square *temp_rec){
     
     cout<<"point of triangle "<<temp_rec->vertex1[0]<<" "<<temp_rec->vertex1[1]<<" "<<temp_rec->vertex2[0]<<" "<<temp_rec->vertex2[1]<<"\n";
     cout<<"perimetr: "<<temp_rec->perimetr<<" "<<"square: "<<temp_rec->square<<"\n\n";
 }


int main() 
{ 
    //инициализируем прямоуголник
    Square *attemp;
    attemp = intit(1,2,3,4);
    show(attemp);
    //Вычисляем площадь и периметр
    calcArea(attemp);
    calcPerimetr(attemp);
    show(attemp);
    //Изменяем размер
    move(attemp,2,3,4,5);
    show(attemp);
    return 0; 
} 