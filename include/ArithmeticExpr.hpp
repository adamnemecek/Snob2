#ifndef _ArithmeticExpr
#define _ArithmeticExpr

namespace Snob2{


  template<typename ROBJ, typename XOBJ, typename YOBJ, typename ACT>
  class ArithmeticBinaryExpr{
  public:

    const XOBJ& x;
    const YOBJ& y;

    ArithmeticBinaryExpr(const XOBJ& _x, const YOBJ& _y): x(_x), y(_y){}

    operator ROBJ() const{
      return ACT()(x,y);
    }

  public:

    ROBJ operator*(float c) const{
      ROBJ z=ACT()(x,y);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }

    ROBJ operator*(double c) const{
      ROBJ z=ACT()(x,y);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }

    ROBJ operator*(complex<float> c) const{
      ROBJ z=ACT()(x,y);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }


  public:

    string str() const{
      return ROBJ(*this).str();
    }

    friend ostream& operator<<(ostream& stream, const ArithmeticBinaryExpr& x){
      stream<<x.str(); return stream;
    }

  };


  template<typename XOBJ, typename YOBJ, typename ROBJ, typename P1, typename ACT>
  class ArithmeticBinaryExpr1{
  public:

    const P1 p1;

    const XOBJ& x;
    const YOBJ& y;

    ArithmeticBinaryExpr1(const XOBJ& _x, const YOBJ& _y): x(_x), y(_y){}

    ArithmeticBinaryExpr1(const XOBJ& _x, const YOBJ& _y, const P1& _p1): x(_x), y(_y), p1(_p1){}

    operator ROBJ() const{
      return ACT()(x,y,p1);
    }


  public:

    ROBJ operator*(float c) const{
      ROBJ z=ACT()(x,y,p1);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }

    ROBJ operator*(double c) const{
      ROBJ z=ACT()(x,y,p1);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }

    ROBJ operator*(complex<float> c) const{
      ROBJ z=ACT()(x,y,p1);
      ROBJ R(z,cnine::fill::zero);
      R.add(z,c);
      return R;
    }


  public:

    string str() const{
      return ROBJ(*this).str();
    }

    friend ostream& operator<<(ostream& stream, const ArithmeticBinaryExpr1& x){
      stream<<x.str(); return stream;
    }

  };


}

#endif 
