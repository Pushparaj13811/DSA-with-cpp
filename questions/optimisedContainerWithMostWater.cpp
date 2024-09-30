#include <iostream>

using namespace std;

int maxWaterContainer(vector<int> container)
{
    int arraySize = container.size();
    int firstPointer = 0;
    int secondPointer = arraySize - 1;
    int maxWater = 0;

    while (firstPointer < secondPointer)
    {
        int width = secondPointer - firstPointer;
        int height = min (container[firstPointer], container[secondPointer]);
        int currWater = width * height;
        maxWater = max(currWater, maxWater);
        if (container[firstPointer] > container[secondPointer])
        {
            secondPointer--;
        }
        else
        {
            firstPointer++;
        }
    }
    return maxWater;
}

int main()
{
    vector<int> container = {5, 6, 7, 9, 1, 3};
    int ans = maxWaterContainer(container);

    cout << "The container that can hold max water is " << ans << endl;

    return 0;
}