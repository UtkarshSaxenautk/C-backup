#include "circle.h"

circle::circle()
{
    radius = 1 ;
}
circle :: circle(double newradius)
{
    radius = newradius ;
}
 double circle :: getarea()
 {
     return radius * radius * 3.14 ;
 }