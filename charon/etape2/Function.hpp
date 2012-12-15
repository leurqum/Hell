
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

template<typename ret, typename arg, typename arg2>
class Function<ret(arg, arg2)>
{
public:

  ret (*_f)(arg, arg2);

  Function<ret(arg, arg2)>(ret(*f)(arg, arg2))
  {
    _f = f;
  }


  Function<ret(arg, arg2)>& operator=(ret(*f)(arg, arg2))
  {
    _f = f;
    return *this;
  }

  ret operator()(arg a, arg2 a2)
  {
    return (*_f)(a, a2);
  }
};

#endif
