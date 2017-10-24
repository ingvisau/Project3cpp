#include <iostream>
#include "planet.h"
#include "functions.h"
#include <cmath>
#include "project3_header.h"

using namespace std;

int main()
{
//Steps N and total time T, to be changed ass you like. (dont you!)
double N = pow(10,5);
double T = 100;

//Adding planets
planet earth(5.97*pow(10,24), 0.8679,0.49622,(-365)*8.7718*pow(10,-3),365*1.491359*pow(10,-2));
planet jupiter(1.9*pow(10,27),-4.56, -2.957, 365*4.0159*pow(10, -3), 365*(-5.9733)*pow(10,-3));
planet mars(6.4185*pow(10,23), -1.5869, 0.500156, -365*3.638385*pow(10,-3), -365*1.216093*pow(10, -2));
planet saturn(5.68319*pow(10,26), -3.2111*pow(10,-1), -1.0050*10, 365*(5.2704*pow(10,-3)), -365*1.9586*pow(10,-4));
planet uranus(86.8103*pow(10,24), 1.7849*pow(10,1), 8.8299, 365*(-1.7728*pow(10,-3)), 365*3.34197*pow(10, -3));
planet mercury(3.302*pow(10,23), -2.328*pow(10,-1), -3.9048*pow(10, -1), 365*1.8517*pow(10,-2), 365*(-1.2999*pow(10,-2)));
planet neptune(102.41*pow(10,24), 2.8619*pow(10,1), -8.8032, 365*9.0220*pow(10,-4), 365*3.0187*pow(10,-3));
planet venus(48.685*pow(10,23), -6.8594*pow(10,-1), 2.1032*pow(10,-1), 365*(-5.8677*pow(10,-3)), 365*(-1.9474*pow(10,-2)));

//Adding Mercury for opg 3g)
planet mercuryP(3.302*pow(10,23),0.3075,0,0,12.44);

//Initializes different systems
functions SolarSystem;
functions MercurPeri;

//Adding planets to the different systems
SolarSystem.add(earth);
SolarSystem.add(jupiter);
SolarSystem.add(mars);
SolarSystem.add(saturn);
SolarSystem.add(uranus);
SolarSystem.add(mercury);
SolarSystem.add(neptune);
SolarSystem.add(venus);
MercurPeri.add(mercuryP);


//Scaled Verlocity Verlet 1 year run
//SolarSystem.VerletV(T,N);

//Scaled Velocity Verlet 100 year run, timestep 1 day.
MercurPeri.VerletVM(T,N);
//Mercury peripheeeeeelion with a slight touch of relativity. Relatively speaking this is a sloppy commment.





//

//


return 0;

}
