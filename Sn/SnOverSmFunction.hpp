#ifndef _SnOverSmFunction
#define _SnOverSmFunction

#include "SnOverSm.hpp"
#include "RtensorObj.hpp"


namespace Snob2{

  class SnOverSmFunction: public cnine::RtensorObj{ 
  public:

    typedef cnine::RtensorObj rtensor;

    const int n;
    const int m;
    //int N;
    //SnObj* G;

    template<typename FILLTYPE, typename = typename std::enable_if<std::is_base_of<cnine::fill_pattern, FILLTYPE>::value, FILLTYPE>::type>
    SnOverSmFunction(int _n, int _m, const FILLTYPE& fill, const int _dev=0):
      rtensor({_snbank->get_SnOverSm(_n,_m)->order()},fill,_dev), n(_n), m(_m){
      //G=_snbank->get_Sn(n);
      //N=G->order;
    }


  public: // ---- Named constructors ------------------------------------------------------------------------


    SnOverSmFunction static raw(const int n, const int m, const int _dev=0){
      return SnOverSmFunction(n,m,cnine::fill_raw(),_dev);}

    SnOverSmFunction static zero(const int n, const int m, const int _dev=0){
      return SnOverSmFunction(n,m,cnine::fill_zero(),_dev);}

    SnOverSmFunction static gaussian(const int n, const int m, const int _dev=0){
      return SnOverSmFunction(n,m,cnine::fill_gaussian(),_dev);}


  public: // ---- Conversions --------------------------------------------------------------------------------


    SnOverSmFunction(const int _n, const int _m, const rtensor& M): 
      rtensor(M),
      n(_n),
      m(_m){}


  public: // ---- Access ------------------------------------------------------------------------------------


    int getN() const{
      return dims(0);
    }


  public: // ---- I/O --------------------------------------------------------------------------------------- 


    string str(const string indent="") const{
      ostringstream oss;
      for(int i=0; i<dims(0); i++){
	//oss<<G.element(i)<<" : ";  // Fix this!
	oss<<RtensorObj::get_value(i)<<endl;
      }
      return oss.str();
    }

    friend ostream& operator<<(ostream& stream, const SnOverSmFunction& x){
      stream<<x.str(); return stream;
    }


  };


}
    //:public FunctionOnGroup<SnOverSmObj,cnine::RtensorObj>{


#endif 
