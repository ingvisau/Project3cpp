#ifndef functions_H
#define functions_H
#include <vector>
#include "planet.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using std::vector;


//A class with functions used to solve project 3

class functions
{

//setting planet as friend class
friend class planet;

public:

    //initializers
    functions();
    functions(double r);


    // properties
    int n_planets;
    double radius, mass_tot, G, mass_sun;
    vector<planet> planets;



    //functions
    void add(planet newplanet);
    void GravitationalForce(planet &current, planet &other, double &Fx, double &Fy);
    void VerletV(double total_time, int N);
    void VerletVM(double total_time, int N);

    //Euler solver
    //euler(double dim, double pos, double vel, int N, double totaltime);

    //Verlet solver



};

#endif // functions_H
