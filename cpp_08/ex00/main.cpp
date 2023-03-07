#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include "easyfind.hpp"
#include <set>

int main()
{

    std::vector<int>        myvector;
    std::list<int>        list;


    for (int i = 0; i < 10; i++)
    {
        myvector.push_back(i);
        list.push_back(i);
    }

    /* Testing with vector */
    std::cout << "Testing easyfind with Vector\n\nVector:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
        std::cout << ' ' << *it;

    std::vector<int>::iterator vector_it = easyfind(myvector, 4);
    if (vector_it == myvector.end())
        std::cout << "\nLa valeur recherchée n'a pas été trouvée dans la liste" << std::endl;
    else
        std::cout << "\nFound:  " << *vector_it << " followed by " << *(++vector_it) << "\n" << std::endl;


    /* Testing with list */
    std::cout << "Testing easyfind with List\n\nList:";
    for (std::list<int>::iterator it = list.begin(); it != list.end(); it++)
        std::cout << ' ' << *it;

    std::list<int>::iterator list_it = easyfind(list, 6);
    if (list_it == list.end()) {
        std::cout << "\nLa valeur recherchée n'a pas été trouvée dans la liste" << std::endl;
    } else {
        std::cout << "\nFound:  " << *list_it << " followed by " << *(++list_it) << "\n" << std::endl;
    }

    int arr[5] = {5, 1,3, 2,1};
    std::deque<int> s(arr, arr + 5);
    // for (int i = 0; i < 5; i++) {
    //     s.insert(arr[i]);
    // }
    for (std::deque<int>::iterator it = s.begin(); it != s.end(); ++it)
        std::cout << " " << *it;
}