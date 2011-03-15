#ifndef TauHCTH0_functional_h
#define TauHCTH0_functional_h
/**********************************************************
* TauHCTH0_functional.h: declarations for TauHCTH0_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 31-Oct-2010
*
***********************************************************/
#include "functional.h"

namespace psi { namespace functional {

class TauHCTH0_Functional : public Functional {
public:
    TauHCTH0_Functional(int npoints, int deriv);
    virtual ~TauHCTH0_Functional();
    virtual void computeRKSFunctional(boost::shared_ptr<Properties> prop);
    virtual void computeUKSFunctional(boost::shared_ptr<Properties> prop);
};
}}
#endif
