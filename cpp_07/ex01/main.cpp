/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <hed-diou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 02:06:15 by hed-diou          #+#    #+#             */
/*   Updated: 2023/01/17 02:16:02 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"







class Awesome
{
  private:
    int _n;  
    public:
        Awesome():_n(42){return;}
        int get() const {return _n;}
};
std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
    o << a.get();return o;
}

template <typename T>
void print(T  &x)
{
    std::cout<<x<<std::endl;return;
}


int main()
{
    int tab[] = {0,1,2,3,4};
    Awesome tab2[5];

    iter(tab,5,print);
    iter(tab2,5,print);
    return 0;
}
// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     iter(array, 5, print);
//     return 0;
// }