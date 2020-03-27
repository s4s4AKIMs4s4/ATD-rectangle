#include<iostream>  
#include <cmath>


using namespace std; 
 
struct Rectangle
{
    double *vertex1;
    double *vertex2;
    double perimetr;
    double square;
};

// Rectangle typedef rec;

struct  Rectangle * intit(double x1,double x2,double x3,double x4){
    Rectangle* temp_rec = new Rectangle;

    temp_rec->vertex1 = new double[2];
    temp_rec->vertex2 = new double[2];

    temp_rec->vertex1[0] =x1;
    temp_rec->vertex1[1] =x2;
    temp_rec->vertex2[0] =x3;
    temp_rec->vertex2[1] =x4;

    return temp_rec;
}

double set_perimetr(Rectangle *temp_rec){
    double temp_1 = abs(temp_rec->vertex1[0] - temp_rec->vertex2[0]);
    double temp_2 = abs(temp_rec->vertex2[0] - temp_rec->vertex2[1]);
    return (2*temp_1 + 2*temp_2);
}

double set_square(Rectangle *temp_rec){
    double temp_1 = abs(temp_rec->vertex1[0] - temp_rec->vertex2[0]);
     double temp_2 = abs(temp_rec->vertex2[0] - temp_rec->vertex2[1]);
    return (temp_1* temp_2);
}

void move(Rectangle *temp_rec,double x1,double x2,double x3,double x4){
    temp_rec->vertex1[0] =x1;
    temp_rec->vertex1[1] =x2;
    temp_rec->vertex2[0] =x3;
    temp_rec->vertex2[1] =x4;
}
 void show(Rectangle *temp_rec){
     cout<<temp_rec->vertex1[0]<<" "<<temp_rec->vertex1[1]<<" "<<temp_rec->vertex2[0]<<" "<<temp_rec->vertex2[1]<<"/n";


 }


int main() 
{ 
    Rectangle *rec1;
    rec1 = intit(1,2,3,4);

    return 0; 
} 