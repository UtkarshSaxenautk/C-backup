#include "cube.h"
#include <cmath>
namespace uiuc {
      cube :: cube()
    {
        length = 1 ;
    }
    
    void cube :: setlength(int a )
    {
      length = a ;
    }
    
    int cube :: getsurfacearea()
    {
        int area = 6 * length ;
        return area ;
    }
    int cube :: getvolume()
    {
        int volume = pow( length , 3);
        return volume ; 
    }
    


}