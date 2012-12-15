
#ifndef FUNCTION_HPP
# define FUNCTION_HPP

template<typename U>
class Function;


template<typename ret, typename arg>
class Function<ret(arg)>
{
public:

  ret (*_f)(arg);

  Function<ret(arg)>(ret(*f)(arg))
  {
    _f = f;
  }


  Function<ret(arg)>& operator=(ret(*f)(arg))
  {
    _f = f;
    return *this;
  }

  ret operator()(arg a)
  {
    return (*_f)(a);
  }
};

#endif
