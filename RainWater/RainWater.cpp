#include<bits/stdc++.h>
using namespace std;
std::vector<int> rainWater(std::vector<int> a)
{
        int n=a.size();
        int leftRain[n],rightRain[n];

        leftRain[0]=a[0];rightRain[n-1]=a[n-1];
        for(int i=1 ;i< n;++i)
        {
                leftRain[i]= max(leftRain[i-1],a[i]);
                rightRain[n-(i+1)] = max(rightRain[n-i] ,a[n-(i+1)]);
        }

        for(int i=0;i< n ;++i)
                a[i]= min(leftRain[i],rightRain[i]);
        return a;
}
void PrintRainWater(vector<int>a)
{
        cout<<"result Rain Water is : "<<endl;
        for(int  i=0;i< a.size();++i)
                cout<<"arr["<<i<<"] = "<<a[i]<<endl;
}
int main()
{
        vector<int> rain_Water({10,5,14,8,10,13});
        PrintRainWater(rainWater(rain_Water));
}
