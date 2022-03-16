#include "circle.h"

circle :: circle()
{
    radius = 1 ;
}
circle :: circle(double new_radius)
{
    radius = new_radius ;
}

 double circle :: getarea()
{
     return  radius * radius * 3.14 ;
}