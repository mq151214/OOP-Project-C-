#include <iostream>
#include "AttributedNode2.h"
using namespace std;

AttributedNode2::AttributedNode2()
{
    Profession = "0";
    CityName = "0";
}
AttributedNode2::AttributedNode2(string p, string cn)
{
    Profession = p;
    CityName = cn;
}
AttributedNode2::~AttributedNode2()
{

}
void AttributedNode2::setProfession(string profession)
{
    Profession = profession;
}
void AttributedNode2::setCityName(string cityName)
{
    CityName = cityName;
}
string AttributedNode2::getProfession()
{
    return Profession;
}
string AttributedNode2::getCityName()
{
    return CityName;
}