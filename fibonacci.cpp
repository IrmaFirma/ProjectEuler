#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int el1 = 1, el2 = 2;
    int even = 0;
    int sum = 0;
    vector <int> array = {1, 2};
    
    int n;
    cin>>n;
    
    int i = 0;
    
    while (array.at(i) < n){
        sum = el1 + el2;
        array.push_back(sum);
        el1 = el2;
        el2 = sum;
        i++;
        if(array.at(i) % 2 == 0){
            even +=array.at(i);
        }
    }
    
    cout<<even;

    return 0;
}
