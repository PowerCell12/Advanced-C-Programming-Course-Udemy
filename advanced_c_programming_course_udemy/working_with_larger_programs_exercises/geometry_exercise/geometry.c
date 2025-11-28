//
// Created by ivan on 29.10.25 г..
//

#include "geometry.h"
#include <math.h>

float circle_area(float radius)
{
    return radius * radius * M_PI;
}

float rectangle_area(float width, float height)
{
    return width * height;
}