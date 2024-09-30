#include <iostream>

using namespace std;

int maxWaterContainer(vector<int> container)
{
    int maxWater = 0;
    int ith, jth;

    for (int i = 0; i < container.size(); i++)
    {
        for (int j = i + 1; j < container.size(); j++)
        {
            int width = j - i;
            int height = min(container[j], container[i]);
            int currWater = width * height;
            if (currWater > maxWater)
            {
                ith = container[i];
                jth = container[j];
            }
            maxWater = max(maxWater, currWater);
        }
    }
    cout << "ith : " << ith << endl;
    cout << "jth : " << jth << endl;
    return maxWater;
}

int main()
{

    vector<int> container = {5, 6, 7, 9, 1, 3};
    int ans = maxWaterContainer(container);

    cout << "The container that can hold max water is " << ans << endl;
}

// If we want to submit this code in coding platform it will give TLE since it is not optimised.