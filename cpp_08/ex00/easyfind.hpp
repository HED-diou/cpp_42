
#ifndef easyfind_h
#define easyfind_h

template <typename T>
typename T::iterator    easyfind(T& container, int val)
{
     return (std::find(container.begin(), container.end(), val));
}

#endif