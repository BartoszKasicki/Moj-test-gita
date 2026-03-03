#include <iostream>

template<class T>
void Rectangle<T>::print(){
    T width=this->param->get(PARAM_WIDTH);
    T height=this->param->get(PARAM_HEIGHT);

    std::cout<<"=== PROSTOKAT ===="<<std::endl;
    std::cout<<"Szerokosc:"<<width<<std::endl;
    std::cout<<"Wysokosc:"<<height<<std::endl;
    std::cout<<"Pole:"<<this->area<<std::endl;
    std::cout<<"Obwod:"<<this->perimeter<<std::endl;
  }

  template<class T>
  void Rectangle<T>::compute(){
T width=this->param->get(PARAM_WIDTH);
T height=this->param->get(PARAM_HEIGHT);
this->area=static_cast<T>(width*height);
this->perimeter=static_cast<T>(2*(width*height));
  }
  