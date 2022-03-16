#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std ;

class cylinder 
{
    private:
    double radius ;
    double height ;
    public:
    cylinder()
    {
        cout << "Enter radius : " ;
        cin >> radius ;
        cout << "Enter height : " ;
        cin >> height ;
    }
    double getarea()
    {
        double area = 2 * 3.14 * radius * height ;
        return area ;
    }
    double getvolume()
    {
       double volume = 3.14 * radius * radius * height ;
       return volume ;
    }

};

int main()
{
    int n ;
    cout << "No . of cylinder : " ;
    cin >> n ;
    double total_area = 0 ;
    double total_volume = 0 ;
    cylinder c[n];
    for(int i  = 0 ; i < n ; i++ )
    {
        
        double area = c[i].getarea() ;
        cout << "Area of cynlinder(" << i << ") : "  << setprecision(4) <<  area << endl;
        double volume = c[i].getvolume() ;
        cout << "Volume of cynlinder(" << i << ") : " << setprecision(4) << volume << endl;
        total_area += area ;
        total_volume += volume ;
    }
    cout << "Total area : " << total_area << endl;
    cout << "Total volume : " << total_volume << endl;
    return 0 ;
}