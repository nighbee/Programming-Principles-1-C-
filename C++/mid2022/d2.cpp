#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
    int size;                              //array size
    int* array;                            //array of ints
    std::vector<int> vecInput;
    int arraycount;                        //counter for array loop
    void findMode(std::vector<int> vec);  //function prototype
    cin >> size;
    array = new int[size];
    for (arraycount = 0; arraycount < size; arraycount++) 
    {
            int num;
            cin >> num;
            vecInput.push_back(num);
    }  
    findMode(vecInput);

    return 0;
}
void findMode(std::vector<int> vec) 
{
    std::sort(vec.begin(), vec.end());
    std::map<int, int> modMap;
    std::vector<int>::iterator iter = vec.begin();
    std::vector<int> results;
    int prev = *iter;
    int maxCount = 1;
    modMap.insert(std::pair <int,int>(*iter, 1));

    iter++;
    for (; iter!= vec.end(); iter++)
    {
        if (prev == *iter)
        {
            std::map<int, int>::iterator mapiter = modMap.find(*iter);
            if ( mapiter == modMap.end())
            {
                modMap.insert(std::pair <int,int>(*iter, 1));
            }
            else
            {
                mapiter->second++;
                if (mapiter->second > maxCount)
                {
                    maxCount = mapiter->second;
                }
            }
        }
        else
        {
            modMap.insert(std::pair <int,int>(*iter, 1));
        }
        prev = *iter;
    }
    std::map<int, int>::iterator mapIter = modMap.begin();
    for (; mapIter != modMap.end(); mapIter++)
    {
        if (mapIter->second == maxCount)
        {
            results.push_back(mapIter->first);
        }
    }
    sort(results.begin(), results.end(), greater<int>());
    std::vector<int>::iterator vecIter = results.begin();
    for (; vecIter != results.end(); vecIter++)
        cout<<*vecIter<<" ";


}