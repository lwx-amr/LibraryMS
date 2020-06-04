#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int> ourList;
    cout << "Hello world!" << endl;
    cin>>x;
    ourList.push_back(x);
    ourList.push_back(15);
    cout<<ourList[0]<<" "<<ourList[1]<<endl;
    return 0;
}
