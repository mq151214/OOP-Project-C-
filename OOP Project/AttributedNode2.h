#ifndef ATTRIBUTEDNODE2_H
#define ATTRIBUTEDNODE2_H

using namespace std;

class AttributedNode2
{
    string Profession;
    string CityName;

    public:
    AttributedNode2();
    AttributedNode2(string p, string c);
    ~AttributedNode2();
    void setProfession(string profession);
    void setCityName(string cityName);
    string getProfession();
    string getCityName();
};

#endif