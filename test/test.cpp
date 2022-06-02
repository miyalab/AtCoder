#include <iostream>
#include <vector>

using std::cout; using std::cin;
using std::endl; using std::vector;
using std::copy;

int main()
{
    vector<char> arr = {'w','x','y','z'};
    int flag;

    system("pause");

    for(auto const& value: arr)
        cout << value << "; ";
    cout << "\nDone !" << endl;

    return EXIT_SUCCESS;
}